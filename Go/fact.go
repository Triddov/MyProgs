package main

import "fmt"

func main() {

	var num int
	var ans int = 1
	fmt.Print("enter number:\n")
	fmt.Scan(&num)

	for i := 1; i < num+1; i++ {
		ans *= i
	}

	fmt.Print(ans)
}
