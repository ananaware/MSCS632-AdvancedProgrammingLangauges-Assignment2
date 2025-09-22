// Rust: ownership and borrowing
fn sum_slice(nums: &[i32]) -> i32 {
    nums.iter().sum()
}

fn main() {
    let mut v = vec![1, 2, 3];

    let total = sum_slice(&v); // immutable borrow
    println!("sum = {}", total);

    v.push(4); // borrow ended; mutation allowed

    let v2 = v; // move ownership; v no longer usable
    println!("v2 len = {}", v2.len());
}
