/*
  14188 - Run-length encoding
  -------
  by Hen Hedymdeith (@alfaproxima) #hard

  ### Question

  Given a `string` sequence of a letters f.e. `AAABCCXXXXXXY`. Return run-length encoded string `3AB2C6XY`.
  Also make a decoder for that string.

  > View on GitHub: https://tsch.js.org/14188
*/

/* _____________ Your Code Here _____________ */
type Remove1s<N extends number> = N extends 1 ? "" : `${N}`;
type BuildArray<N extends number, C extends string, A extends string[] = []> = A["length"] extends N
	? A
	: [...BuildArray<N, C, [C, ...A]>];
type PrintCharArray<T extends string[]> = T extends [
	infer Head extends string,
	...infer Tail extends string[],
]
	? `${Head}${PrintCharArray<Tail>}`
	: "";
namespace RLE {
	export type Encode<
		S extends string,
		C extends string = "",
		A extends unknown[] = [],
	> = S extends `${infer Head}${infer Tail}`
		? C extends ""
			? Encode<Tail, Head, [any, ...A]>
			: Head extends C
				? Encode<Tail, C, [any, ...A]>
				: `${Remove1s<A["length"]>}${C}${Encode<Tail, Head, [any]>}`
		: `${C}${Remove1s<A["length"]>}`;
	export type Decode<S extends string> = S extends `${infer First}${infer Second}${infer Tail}`
		? First extends `${infer N extends number}`
			? `${PrintCharArray<BuildArray<N, Second>>}${Decode<Tail>}`
			: `${PrintCharArray<BuildArray<1, First>>}${Decode<`${Second}${Tail}`>}`
		: S;
};

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  // Raw string -> encoded string
  Expect<Equal<RLE.Encode<'AAABCCXXXXXXY'>, '3AB2C6XY'>>,

  // Encoded string -> decoded string
  Expect<Equal<RLE.Decode<'3AB2C6XY'>, 'AAABCCXXXXXXY'>>,
];
