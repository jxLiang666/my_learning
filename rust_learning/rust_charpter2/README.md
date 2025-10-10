# rust_charpter2
参考[rust-lang.org](https://rust-lang.org/learn/get-started/)

[rust-book](https://doc.rust-lang.org/book/title-page.html) 可以通过 rustup doc --book 打开（wsl不行）

[rust-example](https://doc.rust-lang.org/rust-by-example/)

## 说明
rust第二章

## 开始！

### 1. let创建变量

### 2. 变量默认是immutable的，如果需要修改，需要添加mut

### 3.随机数生成
```rust
rand::rng().random_range(1..=101);
rand::rng().random_range(1..101);
// 区别是上面可以取到101，下面取不到101
```

### 4.string的转化
```rust
let guess: u32 = guess.trim().parse().expect("Please type a number!");
// trim()是用来去除回车空格之类的？
// parse()是用来解析，返回一个result
// expect()判断这个result
```

### 5.循环loop
```rust
loop{
    break;
}
```

### 6.match处理错误
```rust
let guess: u32 = match guess.trim().parse(){
    Ok(num) => num,
    Err(_) => continue,
};
```