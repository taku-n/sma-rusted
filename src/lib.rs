#[no_mangle]
pub extern fn sma(CLOSE: &[f64], PREV_CALCULATED: isize, RATES_TOTAL: isize,
		PERIOD: isize, sma: &mut [f64]) {
	let start = if PREV_CALCULATED == 0 {
		0
	} else {
		PREV_CALCULATED - 1
	};
	let end = RATES_TOTAL - 1;
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









