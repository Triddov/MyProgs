package main

import "fmt"

func main() {

	var n int
	fmt.Scan(&n)

	var A []int
	for i := 0; i < n; i++ {
		A = append(A, n-i)
	}

	B := make([]int, len(A), len(A)) //важна длина того массива, в который мы копируем, и аллоцируемая память для него
	copy(B, A)
	fmt.Print(A, "\n", B)
}
