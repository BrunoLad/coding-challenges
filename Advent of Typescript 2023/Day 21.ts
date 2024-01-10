type TicTacToeChip = "❌" | "⭕";
type TicTacToeEndState = "❌ Won" | "⭕ Won" | "Draw";
type TicTacToeState = TicTacToeChip | TicTacToeEndState;
type TicTacToeEmptyCell = "  ";
type TicTacToeCell = TicTacToeChip | TicTacToeEmptyCell;
type TicTacToeYPositions = "top" | "middle" | "bottom";
type TicTacToeXPositions = "left" | "center" | "right";
type TicTacToePositions = `${TicTacToeYPositions}-${TicTacToeXPositions}`;
type TicTacToeCoordinates = {
	top: 0;
	middle: 1;
	bottom: 2;
	left: 0;
	center: 1;
	right: 2;
};
type TicTacToeBoard = TicTacToeCell[][];
type TicTacToeGame = {
	board: TicTacToeBoard;
	state: TicTacToeState;
};
type TicTacToePossibleWinnableState<B extends TicTacToeGame> =
	// All rows
	| (B["board"][0][0] & B["board"][0][1] & B["board"][0][2])
	| (B["board"][1][0] & B["board"][1][1] & B["board"][1][2])
	| (B["board"][2][0] & B["board"][2][1] & B["board"][2][2])
	// All columns
	| (B["board"][0][0] & B["board"][1][0] & B["board"][2][0])
	| (B["board"][0][1] & B["board"][1][1] & B["board"][2][1])
	| (B["board"][0][2] & B["board"][1][2] & B["board"][2][2])
	// Diagonals
	| (B["board"][0][0] & B["board"][1][1] & B["board"][2][2])
	| (B["board"][2][0] & B["board"][1][1] & B["board"][0][2]);
type AnyEmptySpacesArray<T extends TicTacToeCell[]> = T extends [
	infer Head,
	...infer Tail extends TicTacToeCell[],
]
	? TicTacToeEmptyCell extends Head
		? true
		: AnyEmptySpacesArray<Tail>
	: false;
type AnyEmptySpaces<T extends TicTacToeBoard> = T extends [
	infer Head extends TicTacToeCell[],
	...infer Tail extends TicTacToeBoard,
]
	? AnyEmptySpacesArray<Head> extends true
		? true
		: AnyEmptySpaces<Tail>
	: false;
type TicTacToeCurrentState<Board extends TicTacToeGame> = Exclude<
	TicTacToeChip,
	Board["state"]
> extends TicTacToePossibleWinnableState<Board>
	? Exclude<TicTacToeChip, Board["state"]>
	: true extends AnyEmptySpaces<Board["board"]>
		? "open"
		: "draw";
type EmptyBoard = [["  ", "  ", "  "], ["  ", "  ", "  "], ["  ", "  ", "  "]];

type NewGame = {
	board: EmptyBoard;
	state: "❌";
};
type UpdateX<T extends unknown[], X extends number, M> = {
	[K in keyof T]: K extends `${X}` ? M : T[K];
};
type UpdateBoard<
	B extends TicTacToeBoard,
	Y extends number,
	X extends number,
	M extends TicTacToeState,
> = {
	[K in keyof B]: K extends `${Y}` ? UpdateX<B[K], X, M> : B[K];
};
type TicTacToe<G extends TicTacToeGame, M extends TicTacToePositions> = M extends `${infer Y extends
	TicTacToeYPositions}-${infer X extends TicTacToeXPositions}`
	? // Handles invalid moves
		G["board"][TicTacToeCoordinates[Y]][TicTacToeCoordinates[X]] extends TicTacToeChip
		? G
		: {
					board: UpdateBoard<
						G["board"],
						TicTacToeCoordinates[Y],
						TicTacToeCoordinates[X],
						G["state"]
					>;
					state: Exclude<TicTacToeChip, G["state"]>;
			  } extends infer Game extends TicTacToeGame
			? "❌" extends TicTacToeCurrentState<Game>
				? {
						board: Game["board"];
						state: "❌ Won";
					}
				: "⭕" extends TicTacToeCurrentState<Game>
					? {
							board: Game["board"];
							state: "⭕ Won";
						}
					: TicTacToeCurrentState<Game> extends "draw"
						? {
								board: Game["board"];
								state: "Draw";
							}
						: Game
			: {
					board: UpdateBoard<
						G["board"],
						TicTacToeCoordinates[Y],
						TicTacToeCoordinates[X],
						G["state"]
					>;
					state: Exclude<TicTacToeChip, G["state"]>;
				}
	: G;

const board = {
	board: [
		["⭕", "❌", "⭕"],
		["⭕", "❌", "❌"],
		["❌", "⭕", "  "],
	],
	state: "⭕",
};

import { Equal, Expect } from 'type-testing';

type test_move1_actual = TicTacToe<NewGame, 'top-center'>;
//   ^?
type test_move1_expected = {
  board: [
    [ '  ', '❌', '  ' ],
    [ '  ', '  ', '  ' ],
    [ '  ', '  ', '  ' ]
  ];
  state: '⭕';
};
type test_move1 = Expect<Equal<test_move1_actual, test_move1_expected>>;

type test_move2_actual = TicTacToe<test_move1_actual, 'top-left'>;
//   ^?
type test_move2_expected = {
  board: [
    ['⭕', '❌', '  '], 
    ['  ', '  ', '  '], 
    ['  ', '  ', '  ']];
  state: '❌';
}
type test_move2 = Expect<Equal<test_move2_actual, test_move2_expected>>;

type test_move3_actual = TicTacToe<test_move2_actual, 'middle-center'>;
//   ^?
type test_move3_expected = {
  board: [
    [ '⭕', '❌', '  ' ],
    [ '  ', '❌', '  ' ],
    [ '  ', '  ', '  ' ]
  ];
  state: '⭕';
};
type test_move3 = Expect<Equal<test_move3_actual, test_move3_expected>>;

type test_move4_actual = TicTacToe<test_move3_actual, 'bottom-left'>;
//   ^?
type test_move4_expected = {
  board: [
    [ '⭕', '❌', '  ' ],
    [ '  ', '❌', '  ' ],
    [ '⭕', '  ', '  ' ]
  ];
  state: '❌';
};
type test_move4 = Expect<Equal<test_move4_actual, test_move4_expected>>;


type test_x_win_actual = TicTacToe<test_move4_actual, 'bottom-center'>;
//   ^?
type test_x_win_expected = {
  board: [
    [ '⭕', '❌', '  ' ],
    [ '  ', '❌', '  ' ],
    [ '⭕', '❌', '  ' ]
  ];
  state: '❌ Won';
};
type test_x_win = Expect<Equal<test_x_win_actual, test_x_win_expected>>;

type type_move5_actual = TicTacToe<test_move4_actual, 'bottom-right'>;
//   ^?
type type_move5_expected = {
  board: [
    [ '⭕', '❌', '  ' ],
    [ '  ', '❌', '  ' ],
    [ '⭕', '  ', '❌' ]
  ];
  state: '⭕';
};
type test_move5 = Expect<Equal<type_move5_actual, type_move5_expected>>;

type test_o_win_actual = TicTacToe<type_move5_actual, 'middle-left'>;
//   ^?
type test_o_win_expected = {
  board: [
    [ '⭕', '❌', '  ' ],
    [ '⭕', '❌', '  ' ],
    [ '⭕', '  ', '❌' ]
  ];
  state: '⭕ Won';
};

// invalid move don't change the board and state
type test_invalid_actual = TicTacToe<test_move1_actual, 'top-center'>;
//   ^?
type test_invalid_expected = {
  board: [
    [ '  ', '❌', '  ' ],
    [ '  ', '  ', '  ' ],
    [ '  ', '  ', '  ' ]
  ];
  state: '⭕';
};
type test_invalid = Expect<Equal<test_invalid_actual, test_invalid_expected>>;

type test_before_draw = {
  board: [
    ['⭕', '❌', '⭕'], 
    ['⭕', '❌', '❌'], 
    ['❌', '⭕', '  ']];
  state: '⭕';
}
type test_draw_actual = TicTacToe<test_before_draw, 'bottom-right'>;
//   ^?
type test_draw_expected = {
  board: [
    ['⭕', '❌', '⭕'], 
    ['⭕', '❌', '❌'], 
    ['❌', '⭕', '⭕']];
  state: 'Draw';
}
type test_draw = Expect<Equal<test_draw_actual, test_draw_expected>>;
