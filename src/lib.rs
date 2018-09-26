#[no_mangle]
pub extern fn sma(CLOSE: &[f64], PREV_CALCULATED: &isize, RATES_TOTAL: &isize,
	PERIOD: &isize, sma: &mut [f64]) {
}

#[no_mangle]
pub extern fn add(x: isize, y: isize) -> isize {
    x + y
}

#[cfg(test)]
mod tests {
    #[test]
    fn it_works() {
        assert_eq!(2 + 2, 4);
    }
}









