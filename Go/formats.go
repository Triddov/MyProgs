package main

import "fmt"

func main() {

	var a int = 100
	var b float64 = 10.789
	var c string = "hello"
	var d bool = true
	fmt.Printf("Это число %d типа %T", a, a)
	fmt.Printf("\nbin-%b oct-%o hex-%x", a, a, a)
	fmt.Printf("\n%10.5f", b)
	fmt.Printf("\n%q %s", c, c)
	fmt.Printf("\n%t", d)
}
