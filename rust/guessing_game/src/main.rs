// Program: Prompts the user to guess a number until it is guessed right
// Name   : Brandon Qilin Hung
// Date   : 05-26-2022

// Libraries
use std::io;
use std::cmp::Ordering;
use rand::Rng;

// Main
fn main()
{
    println!("Guess, Guess, Guesssss the Number!"); // Instructions for User
    let secret_number = rand::thread_rng().gen_range(1, 101); // Declares & Initializes secret_number
    loop
    {
        println!("Guess It!: ");
        // Declare Variable(s)   
        let mut guess = String::new(); // Declares & Initialize input for user to type the number

        // Prompts for Input
        io::stdin().read_line(&mut guess)
            .expect("Failed to Read Line~"); // Error-Handling
        
        // Error-Handling, Control Flow, Error Exception
        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };
        
        // Output
        println!("The secret number is {}", secret_number);
        println!("You guessed: {}", guess);
        
        match guess.cmp(&secret_number) // Output depends on condition
        {
            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("toO LARGE!"),
            Ordering::Equal => {
                println!("Bullseye!");
                break;
            }
        }
        

    }
    
}