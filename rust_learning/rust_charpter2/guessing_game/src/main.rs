// use std::io; // prelude
use rand::Rng; // trait 特质
use std::cmp::Ordering;
fn main() {
    println!("猜数!");

    let secret_number = rand::rng().random_range(1..=101);
    println!("secret_number is {}", secret_number);

    loop {
        println!("猜测一个数字!");

        // let a: i32 = 1; // immutable 变量
        // let hello = a;
        // println!("{}",hello);

        let mut guess = String::new();

        std::io::stdin().read_line(&mut guess).expect("无法读取行");

        // let guess: u32 = guess.trim().parse().expect("Please type a number!");
        let guess: u32 = match guess.trim().parse(){
            Ok(num) => num,
            Err(_) => continue,
        };

        println!("你猜测的数字是: {}", guess);
        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("Too big!"),
            Ordering::Equal => {
                println!("Great!");
                break;
            }
        };
    }
}
