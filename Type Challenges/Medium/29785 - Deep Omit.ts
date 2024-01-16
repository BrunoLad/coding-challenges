/*
  29785 - Deep Omit
  -------
  by bowen (@jiaowoxiaobala) #medium #omit object-keys deep

  ### Question

  Implement a type`DeepOmit`, Like Utility types [Omit](https://www.typescriptlang.org/docs/handbook/utility-types.html#omittype-keys), A type takes two arguments.

  For example:

  ```ts
  type obj = {
    person: {
      name: string;
      age: {
        value: number
      }
    }
  }

  type test1 = DeepOmit<obj, 'person'>    // {}
  type test2 = DeepOmit<obj, 'person.name'> // { person: { age: { value: number } } }
  type test3 = DeepOmit<obj, 'name'> // { person: { name: string; age: { value: number } } }
  type test4 = DeepOmit<obj, 'person.age.value'> // { person: { name: string; age: {} } }
  ```

  > View on GitHub: https://tsch.js.org/29785
*/

/* _____________ Your Code Here _____________ */

type DeepOmit<T, K extends string> = {
	[key in keyof T as key extends K ? never : key]: K extends `${infer P1}.${infer P2}`
		? P1 extends key
			? DeepOmit<T[P1], P2>
			: T[key]
		: T[key];
};

/* _____________ Test Cases _____________ */
import type { Equal, Expect } from "@type-challenges/utils";

type obj = {
	person: {
		name: string;
		age: {
			value: number;
		};
	};
};

type cases = [
	Expect<Equal<DeepOmit<obj, "person">, {}>>,
	Expect<Equal<DeepOmit<obj, "person.name">, { person: { age: { value: number } } }>>,
	Expect<Equal<DeepOmit<obj, "name">, obj>>,
	Expect<Equal<DeepOmit<obj, "person.age.value">, { person: { name: string; age: {} } }>>,
];
