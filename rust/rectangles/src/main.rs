// Program:
// Name   : Brandon Qilin Hung
// Date   : 05-26-2022

// Libraries


// Functionality
#[derive(Debug)]

// Structure(s)
struct Rectangle
{
    width: u32,
    height: u32,
}

// Method(s)
impl Rectangle
{
    // Function(s)
    fn area(&self) -> u32
    {
        self.width * self.height
    }

    fn can_hold(&self, other: &Rectangle) -> bool
    {
        self.width > other.width && self.height > other.width
    }
}

// Main
fn main()
{
    // Declaration & Initialization of Instance(s)
    let rect1 = Rectangle { height : 2 , width: 10};
    let rect2 = Rectangle { height: 4 , width: 8 };            
    let rect3 = Rectangle { height: 6 , width: 1 };

    // Output
    println!("Area of Rectangles");
    println!("rect1: {} squared pixels", rect1.area());
    println!("rect2: {} squared pixels", rect2.area());
    println!("rect3: {} squared pixels", rect3.area());
    println!("Can rect1 hold rect2? {}", rect1.can_hold(&rect2));
    println!("Can rect1 hold rect3? {}", rect1.can_hold(&rect3));
}

