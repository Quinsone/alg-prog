package main

import (
	"fmt"
)

func Read(n int) []int {
	var ar []int
	num := 0
	for i := 0; i < n; i++ {
		fmt.Scan(&num)
		ar = append(ar, num)
	}
	return ar
}

func findSingle(nums []int) int {
	result := 0
	for _, num := range nums {
		result ^= num
	}
	return result
}

func main() {
	var a int
	fmt.Scan(&a)

	nums := make([]int, a)  
	for i := 0; i < a; i++ {
		fmt.Scan(&nums[i])
	}
	word := findSingle(nums)
	fmt.Println(word)
}