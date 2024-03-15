package main

import "fmt"

func main() {
	var count int

	fmt.Scan(&count)

	for i := 1; i <= count; i++ {
		fmt.Print(i*i, "\n")
	}

}
