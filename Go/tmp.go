package main

import "fmt"

func main() {

	var A []int
	for i := 0; i < 5; i++ {
		var tmp int
		fmt.Scan(&tmp)
		A = append(A, tmp)
	}
	
}
