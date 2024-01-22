/*
  2857 - IsRequiredKey
  -------
  by jiangshan (@jiangshanmeta) #hard #utils

  ### Question

  Implement a generic ```IsRequiredKey<T, K>```  that return whether ```K``` are required keys of ```T``` .

  For example

  ```typescript
  type A = IsRequiredKey<{ a: number, b?: string },'a'> // true
  type B = IsRequiredKey<{ a: number, b?: string },'b'> // false
  type C = IsRequiredKey<{ a: number, b?: string },'b' | 'a'> // false
  ```

  > View on GitHub: https://tsch.js.org/2857
*/

/* _____________ Your Code Here _____________ */

type IsRequiredKey2<T, K extends keyof T> = keyof {
	[key in K as T[key] extends Required<T>[key] ? `${true}` : `${false}`]: true;
} extends `${infer B extends boolean}`
	? Exclude<B, true> extends never
		? true
		: false
	: never;

type IsRequiredKey<T, K extends keyof T> = {
	[key in K]: T[key] extends Required<T>[key] ? true : false;
}[K] extends infer B
	? Exclude<B, true> extends never
		? true
		: false
	: never;

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from "@type-challenges/utils";

type cases = [
	Expect<Equal<IsRequiredKey<{ a: number; b?: string }, "a">, true>>,
	Expect<Equal<IsRequiredKey<{ a: undefined; b: string }, "a">, true>>,
	Expect<Equal<IsRequiredKey<{ a: number; b?: string }, "b">, false>>,
	Expect<Equal<IsRequiredKey<{ a: number; b?: string }, "b" | "a">, false>>,
	Expect<Equal<IsRequiredKey<{ a: undefined; b: undefined }, "b" | "a">, true>>,
];
