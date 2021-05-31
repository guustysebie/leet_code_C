package main

import "fmt"

func main() {

	var sol = twoSum([]int{3, 2, 4}, 6)
	fmt.Println(sol)
}

func twoSum(nums []int, target int) []int {
	var lngt = len(nums)
	for index := 0; index < lngt; index++ {
		for j := 0; j < lngt; j++ {
			if nums[index]+nums[j] == target && index != j {
				return []int{index, j}
			}
		}

	}
	return nil
}
