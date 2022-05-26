// Program: Slices sentences into words separated by whitespace.
// Name   : Brandon Qilin Hung
// Date   : 05-26-2022

// Libraries


// Main
fn main() 
{
    let construct = String::from("Luna Laurel"); // Character from Punishing: Gray Raven
    let model_name = first_word(&construct[..]);
    let version_name = second_word(&construct[..]);

    println!("{}: {}", model_name, version_name); // Output
}


// Function(s)
// Finds the first word and returns the first word
fn first_word(s: &str) -> &str
{
    let bytes = s.as_bytes();
    for(i, &item) in bytes.iter().enumerate()
    {
        if item == b' '
        {
            return &s[..i];
        }
    }

    s
}

// Finds the second word and returns the second word
fn second_word(s: &str) -> &str
{
    let bytes = s.as_bytes();
    for(i, &item) in bytes.iter().enumerate()
    {
        if item == b' '
        {
            return &s[i..]
        }
    }
    
    s
}
