/*
  9286 - FirstUniqueCharIndex
  -------
  by jiangshan (@jiangshanmeta) #medium #string

  ### Question

  Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1. (Inspired by [leetcode 387](https://leetcode.com/problems/first-unique-character-in-a-string/))

  > View on GitHub: https://tsch.js.org/9286
*/

/* _____________ Your Code Here _____________ */
type ToCharArray<S extends string> = S extends `${infer Head}${infer Tail}`
  ? [Head, ...ToCharArray<Tail>]
  : [];
type FirstUniqueCharIndex<T extends string, S extends string = T, A extends unknown[] = []> = 
  T extends `${infer Head}${infer Tail}`
    ? S extends `${infer First}${Head}${infer Rest}`
      ? Head extends ToCharArray<`${First}${Rest}`>[number]
        ? FirstUniqueCharIndex<Tail, T, [...A, Head]>
        : A['length']
      : A['length']
    : -1;

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from '@type-challenges/utils'

type cases = [
  Expect<Equal<FirstUniqueCharIndex<'leetcode'>, 0>>,
  Expect<Equal<FirstUniqueCharIndex<'loveleetcode'>, 2>>,
  Expect<Equal<FirstUniqueCharIndex<'aabb'>, -1>>,
  Expect<Equal<FirstUniqueCharIndex<''>, -1>>,
  Expect<Equal<FirstUniqueCharIndex<'aaa'>, -1>>,
]
