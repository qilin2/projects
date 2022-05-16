## Libraries
import subprocess #enables system commands
import re         #enables regular expressions

##  Main Function
output_cmd = subprocess.run(["netsh", "wlan" , "show", "profiles"], capture_output = True).stdout.decode()
profile    = (re.findall("All User Profile     : (.*)\r", output_cmd))
wifi_list = []
if len(profile) != 0:
    for name in profile:
        wifi_profile = {}
        profile_info = subprocess.run(["netsh", "wlan", "show", "profiles", name], capture_output = True).stdout.decode()

        if re.search("Security key           : Absent", profile_info):
            continue
        else:
            wifi_profile["WIFI"] = name
            profile_info_pass = subprocess.run(["netsh", "wlan", "show", "profile", name, "key=clear"], capture_output = True).stdout.decode()
            password = re.search("Key Content            : (.*)\r", profile_info_pass)
            if password == None:
                wifi_profile["PASSWORD"] = None
            else:
                wifi_profile["PASSWORD"] = password[1]
        wifi_list.append(wifi_profile)

for i in range(len(wifi_list)):
    print(wifi_list[i])