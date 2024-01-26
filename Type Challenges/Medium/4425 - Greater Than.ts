/*
  4425 - Greater Than
  -------
  by ch3cknull (@ch3cknull) #medium #array

  ### Question

  In This Challenge, You should implement a type `GreaterThan<T, U>` like `T > U`

  Negative numbers do not need to be considered.

  For example

  ```ts
  GreaterThan<2, 1> //should be true
  GreaterThan<1, 1> //should be false
  GreaterThan<10, 100> //should be false
  GreaterThan<111, 11> //should be true
  ```

  Good Luck!

  > View on GitHub: https://tsch.js.org/4425
*/

/* _____________ Your Code Here _____________ */
type ReverseString<S extends string> = S extends `${infer Head}${infer Tail}`
	? `${ReverseString<Tail>}${Head}`
	: "";
type NumberSequence = "0123456789";
type ToNumber<S extends string> = S extends `${infer N extends number}` ? N : 0;
type ToString<T extends number> = `${T}`;
type GreaterThan<T extends number, U extends number, R = false> = ReverseString<
	ToString<T>
> extends `${infer HeadT}${infer TailT}`
	? ReverseString<ToString<U>> extends `${infer HeadU}${infer TailU}`
		? NumberSequence extends `${string}${HeadU}${string}${HeadT}${string}`
			? TailT extends ""
				? TailU extends ""
					? true
					: false
				: GreaterThan<ToNumber<ReverseString<TailT>>, ToNumber<ReverseString<TailU>>, true>
			: NumberSequence extends `${string}${HeadT}${string}${HeadU}${string}`
				? TailU extends ""
					? TailT extends ""
						? false
						: true
					: GreaterThan<ToNumber<ReverseString<TailT>>, ToNumber<ReverseString<TailU>>, false>
				: HeadU extends HeadT
					? TailU extends ""
						? TailT extends ""
							? R
							: true
						: GreaterThan<ToNumber<ReverseString<TailT>>, ToNumber<ReverseString<TailU>>, R>
					: GreaterThan<ToNumber<ReverseString<TailT>>, ToNumber<ReverseString<TailU>>, true> // will never reach
		: R
	: R;

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from "@type-challenges/utils";

type cases = [
	Expect<Equal<GreaterThan<1, 0>, true>>,
	Expect<Equal<GreaterThan<5, 4>, true>>,
	Expect<Equal<GreaterThan<4, 5>, false>>,
	Expect<Equal<GreaterThan<0, 0>, false>>,
	Expect<Equal<GreaterThan<10, 9>, true>>,
	Expect<Equal<GreaterThan<20, 20>, false>>,
	Expect<Equal<GreaterThan<10, 100>, false>>,
	Expect<Equal<GreaterThan<111, 11>, true>>,
	Expect<Equal<GreaterThan<1234567891011, 1234567891010>, true>>,
	Expect<Equal<GreaterThan<752, 289>, true>>,
	Expect<Equal<GreaterThan<11, 11>, false>>,
	Expect<Equal<GreaterThan<11, 8>, true>>,
	Expect<Equal<GreaterThan<56, 83>, false>>,
	Expect<Equal<GreaterThan<47, 21>, true>>,
	Expect<Equal<GreaterThan<15, 11>, true>>,
	Expect<Equal<GreaterThan<46, 64>, false>>,
	Expect<Equal<GreaterThan<81, 89>, false>>,
	Expect<Equal<GreaterThan<50, 49>, true>>,
	Expect<Equal<GreaterThan<18, 24>, false>>,
	Expect<Equal<GreaterThan<19, 42>, false>>,
];
