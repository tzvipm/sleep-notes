import {Lexer as CLexer} from 'chevrotain';
import * as Tokens from './tokens';

export const allTokens = Object.values(Tokens);

export const Lexer = new CLexer(allTokens);