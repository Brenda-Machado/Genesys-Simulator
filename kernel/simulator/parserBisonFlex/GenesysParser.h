// A Bison parser, made by GNU Bison 3.7.6.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file ../GenesysParser.h
 ** Define the yy::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_GENESYSPARSER_H_INCLUDED
#define YY_YY_GENESYSPARSER_H_INCLUDED
// "%code requires" blocks.
#line 9 "bisonparser.yy"

#include <string>
#include <cmath>
#include "obj_t.h"
#include "../../util/Util.h"
#include "../Attribute.h"
/*----begin_Includes_plugins----*/
/*--begin_Includes:Variable--*/
#include "../../../plugins/elements/Variable.h"
/*--end_Includes:Variable--*/
/*--begin_Includes:Queue--*/
#include "../../../plugins/elements/Queue.h"
/*--end_Includes:Queue--*/
/*--begin_Includes:Formula--*/
#include "../../../plugins/elements/Formula.h"
/*--end_Includes:Formula--*/
/*--begin_Includes:Resource--*/
#include "../../../plugins/elements/Resource.h"
/*--end_Includes:Resource--*/
/*--begin_Includes:Set--*/
#include "../../../plugins/elements/Set.h"
/*--end_Includes:Set--*/
/*----end_Includes_plugins----*/

class genesyspp_driver;


#line 77 "../GenesysParser.h"

#include <cassert>
#include <cstdlib> // std::abort
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#if defined __cplusplus
#define YY_CPLUSPLUS __cplusplus
#else
#define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
#define YY_MOVE           std::move
#define YY_MOVE_OR_COPY   move
#define YY_MOVE_REF(Type) Type&&
#define YY_RVREF(Type)    Type&&
#define YY_COPY(Type)     Type
#else
#define YY_MOVE
#define YY_MOVE_OR_COPY   copy
#define YY_MOVE_REF(Type) Type&
#define YY_RVREF(Type)    const Type&
#define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
#define YY_NOEXCEPT noexcept
#define YY_NOTHROW
#else
#define YY_NOEXCEPT
#define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
#define YY_CONSTEXPR constexpr
#else
#define YY_CONSTEXPR
#endif
#include "location.hh"
#include <typeinfo>
#ifndef YY_ASSERT
#include <cassert>
#define YY_ASSERT assert
#endif


#ifndef YY_ATTRIBUTE_PURE
#if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
#define YY_ATTRIBUTE_PURE
#endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
#if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
#else
#define YY_ATTRIBUTE_UNUSED
#endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
#define YY_USE(E) ((void) (E))
#else
#define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
#define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
#define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
#define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
#define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
#define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
#define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_BEGIN
#define YY_IGNORE_USELESS_CAST_END
#endif

#ifndef YY_CAST
#ifdef __cplusplus
#define YY_CAST(Type, Val) static_cast<Type> (Val)
#define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#else
#define YY_CAST(Type, Val) ((Type) (Val))
#define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#endif
#endif
#ifndef YY_NULLPTR
#if defined __cplusplus
#if 201103L <= __cplusplus
#define YY_NULLPTR nullptr
#else
#define YY_NULLPTR 0
#endif
#else
#define YY_NULLPTR ((void*)0)
#endif
#endif

/* Debug traces.  */
#ifndef YYDEBUG
#define YYDEBUG 1
#endif

namespace yy {
#line 211 "../GenesysParser.h"




	/// A Bison parser.

	class genesyspp_parser {
	public:
#ifndef YYSTYPE
		/// A buffer to store and retrieve objects.
		///
		/// Sort of a variant, but does not keep track of the nature
		/// of the stored data, since that knowledge is available
		/// via the current parser state.

		class semantic_type {
		public:
			/// Type of *this.
			typedef semantic_type self_type;

			/// Empty construction.
			semantic_type() YY_NOEXCEPT
			: yybuffer_()
			, yytypeid_(YY_NULLPTR) {
			}

			/// Construct and fill.
			template <typename T>
			semantic_type(YY_RVREF(T) t)
			: yytypeid_(&typeid (T)) {
				YY_ASSERT(sizeof (T) <= size);
				new (yyas_<T> ()) T(YY_MOVE(t));
			}

#if 201103L <= YY_CPLUSPLUS
			/// Non copyable.
			semantic_type(const self_type&) = delete;
			/// Non copyable.
			self_type& operator=(const self_type&) = delete;
#endif

			/// Destruction, allowed only if empty.
			~semantic_type() YY_NOEXCEPT {
				YY_ASSERT(!yytypeid_);
			}

#if 201103L <= YY_CPLUSPLUS
			/// Instantiate a \a T in here from \a t.
			template <typename T, typename... U>
			T&
			emplace(U&&... u) {
				YY_ASSERT(!yytypeid_);
				YY_ASSERT(sizeof (T) <= size);
				yytypeid_ = &typeid (T);
				return *new (yyas_<T> ()) T(std::forward <U>(u)...);
			}
#else
			/// Instantiate an empty \a T in here.
			template <typename T>
			T&
			emplace() {
				YY_ASSERT(!yytypeid_);
				YY_ASSERT(sizeof (T) <= size);
				yytypeid_ = &typeid (T);
				return *new (yyas_<T> ()) T();
			}

			/// Instantiate a \a T in here from \a t.
			template <typename T>
			T&
			emplace(const T& t) {
				YY_ASSERT(!yytypeid_);
				YY_ASSERT(sizeof (T) <= size);
				yytypeid_ = &typeid (T);
				return *new (yyas_<T> ()) T(t);
			}
#endif

			/// Instantiate an empty \a T in here.
			/// Obsolete, use emplace.
			template <typename T>
			T&
			build() {
				return emplace<T> ();
			}

			/// Instantiate a \a T in here from \a t.
			/// Obsolete, use emplace.
			template <typename T>
			T&
			build(const T& t) {
				return emplace<T> (t);
			}

			/// Accessor to a built \a T.
			template <typename T>
			T&
			as() YY_NOEXCEPT {
				YY_ASSERT(yytypeid_);
				YY_ASSERT(*yytypeid_ == typeid (T));
				YY_ASSERT(sizeof (T) <= size);
				return *yyas_<T> ();
			}

			/// Const accessor to a built \a T (for %printer).
			template <typename T>
			const T&
			as() const YY_NOEXCEPT {
				YY_ASSERT(yytypeid_);
				YY_ASSERT(*yytypeid_ == typeid (T));
				YY_ASSERT(sizeof (T) <= size);
				return *yyas_<T> ();
			}

			/// Swap the content with \a that, of same type.
			///
			/// Both variants must be built beforehand, because swapping the actual
			/// data requires reading it (with as()), and this is not possible on
			/// unconstructed variants: it would require some dynamic testing, which
			/// should not be the variant's responsibility.
			/// Swapping between built and (possibly) non-built is done with
			/// self_type::move ().
			template <typename T>
			void
			swap(self_type& that) YY_NOEXCEPT {
				YY_ASSERT(yytypeid_);
				YY_ASSERT(*yytypeid_ == *that.yytypeid_);
				std::swap(as<T> (), that.as<T> ());
			}

			/// Move the content of \a that to this.
			///
			/// Destroys \a that.
			template <typename T>
			void
			move(self_type& that) {
#if 201103L <= YY_CPLUSPLUS
				emplace<T> (std::move(that.as<T> ()));
#else
				emplace<T> ();
				swap<T> (that);
#endif
				that.destroy<T> ();
			}

#if 201103L <= YY_CPLUSPLUS
			/// Move the content of \a that to this.
			template <typename T>
			void
			move(self_type&& that) {
				emplace<T> (std::move(that.as<T> ()));
				that.destroy<T> ();
			}
#endif

			/// Copy the content of \a that to this.
			template <typename T>
			void
			copy(const self_type& that) {
				emplace<T> (that.as<T> ());
			}

			/// Destroy the stored \a T.
			template <typename T>
			void
			destroy() {
				as<T> ().~T();
				yytypeid_ = YY_NULLPTR;
			}

		private:
#if YY_CPLUSPLUS < 201103L
			/// Non copyable.
			semantic_type(const self_type&);
			/// Non copyable.
			self_type& operator=(const self_type&);
#endif

			/// Accessor to raw memory as \a T.
			template <typename T>
			T*
			yyas_() YY_NOEXCEPT {
				void *yyp = yybuffer_.yyraw;
				return static_cast<T*> (yyp);
			}

			/// Const accessor to raw memory as \a T.
			template <typename T>
			const T*
			yyas_() const YY_NOEXCEPT {
				const void *yyp = yybuffer_.yyraw;
				return static_cast<const T*> (yyp);
			}

			/// An auxiliary type to compute the largest semantic type.

			union union_type {
				// NUMD
				// NUMH
				// CTEZERO
				// oLE
				// oGE
				// oEQ
				// oNE
				// oAND
				// oOR
				// oNOT
				// fSIN
				// fCOS
				// fROUND
				// fMOD
				// fTRUNC
				// fFRAC
				// fEXP
				// fSQRT
				// fLOG
				// fLN
				// fVAL
				// fEVAL
				// fLENG
				// fRND1
				// fEXPO
				// fNORM
				// fUNIF
				// fWEIB
				// fLOGN
				// fGAMM
				// fERLA
				// fTRIA
				// fBETA
				// fDISC
				// fTNOW
				// fTFIN
				// fMAXREP
				// fNUMREP
				// fIDENT
				// cIF
				// cELSE
				// cFOR
				// cTO
				// cDO
				// ATRIB
				// CSTAT
				// fTAVG
				// ILLEGAL
				// RESOURCE
				// fNR
				// fMR
				// fIRF
				// fRESSEIZES
				// fSTATE
				// fSETSUM
				// fRESUTIL
				// QUEUE
				// fNQ
				// fFIRSTINQ
				// fLASTINQ
				// fSAQUE
				// fAQUE
				// fENTATRANK
				// SET
				// fNUMSET
				// VARI
				// FORM
				// fNUMGR
				// fATRGR
				// input
				// expression
				// numero
				// aritmetica
				// relacional
				// comando
				// comandoIF
				// comandoFOR
				// function
				// kernelFunction
				// trigonFunction
				// mathFunction
				// probFunction
				// userFunction
				// listaparm
				// atributo
				// variavel
				// formula
				// atribuicao
				// pluginFunction
				char dummy1[sizeof (obj_t)];
			};

			/// The size of the largest semantic type.

			enum {
				size = sizeof (union_type)
			};

			/// A buffer to store semantic values.

			union {
				/// Strongest alignment constraints.
				long double yyalign_me;
				/// A buffer large enough to store any of the semantic values.
				char yyraw[size];
			} yybuffer_;

			/// Whether the content is built: if defined, the name of the stored type.
			const std::type_info *yytypeid_;
		};

#else
		typedef YYSTYPE semantic_type;
#endif
		/// Symbol locations.
		typedef location location_type;

		/// Syntax errors thrown from user actions.

		struct syntax_error : std::runtime_error {
			syntax_error(const location_type& l, const std::string& m)
			: std::runtime_error(m)
			, location(l) {
			}
			syntax_error(const syntax_error& s)
			: std::runtime_error(s.what())
			, location(s.location) {
			}

			~syntax_error() YY_NOEXCEPT YY_NOTHROW;

			location_type location;
		};

		/// Token kinds.

		struct token {

			enum token_kind_type {
				YYEMPTY = -2,
				END = 0, // "end of file"
				YYerror = 256, // error
				YYUNDEF = 257, // "invalid token"
				NUMD = 258, // NUMD
				NUMH = 259, // NUMH
				CTEZERO = 260, // CTEZERO
				oLE = 261, // oLE
				oGE = 262, // oGE
				oEQ = 263, // oEQ
				oNE = 264, // oNE
				oAND = 265, // oAND
				oOR = 266, // oOR
				oNOT = 267, // oNOT
				fSIN = 268, // fSIN
				fCOS = 269, // fCOS
				fROUND = 270, // fROUND
				fMOD = 271, // fMOD
				fTRUNC = 272, // fTRUNC
				fFRAC = 273, // fFRAC
				fEXP = 274, // fEXP
				fSQRT = 275, // fSQRT
				fLOG = 276, // fLOG
				fLN = 277, // fLN
				fVAL = 278, // fVAL
				fEVAL = 279, // fEVAL
				fLENG = 280, // fLENG
				fRND1 = 281, // fRND1
				fEXPO = 282, // fEXPO
				fNORM = 283, // fNORM
				fUNIF = 284, // fUNIF
				fWEIB = 285, // fWEIB
				fLOGN = 286, // fLOGN
				fGAMM = 287, // fGAMM
				fERLA = 288, // fERLA
				fTRIA = 289, // fTRIA
				fBETA = 290, // fBETA
				fDISC = 291, // fDISC
				fTNOW = 292, // fTNOW
				fTFIN = 293, // fTFIN
				fMAXREP = 294, // fMAXREP
				fNUMREP = 295, // fNUMREP
				fIDENT = 296, // fIDENT
				cIF = 297, // cIF
				cELSE = 298, // cELSE
				cFOR = 299, // cFOR
				cTO = 300, // cTO
				cDO = 301, // cDO
				ATRIB = 302, // ATRIB
				CSTAT = 303, // CSTAT
				fTAVG = 304, // fTAVG
				ILLEGAL = 305, // ILLEGAL
				RESOURCE = 306, // RESOURCE
				fNR = 307, // fNR
				fMR = 308, // fMR
				fIRF = 309, // fIRF
				fRESSEIZES = 310, // fRESSEIZES
				fSTATE = 311, // fSTATE
				fSETSUM = 312, // fSETSUM
				fRESUTIL = 313, // fRESUTIL
				QUEUE = 314, // QUEUE
				fNQ = 315, // fNQ
				fFIRSTINQ = 316, // fFIRSTINQ
				fLASTINQ = 317, // fLASTINQ
				fSAQUE = 318, // fSAQUE
				fAQUE = 319, // fAQUE
				fENTATRANK = 320, // fENTATRANK
				SET = 321, // SET
				fNUMSET = 322, // fNUMSET
				VARI = 323, // VARI
				FORM = 324, // FORM
				fNUMGR = 325, // fNUMGR
				fATRGR = 326, // fATRGR
				LPAREN = 327, // "("
				RPAREN = 328, // ")"
				LBRACKET = 329, // "["
				RBRACKET = 330, // "]"
				PLUS = 331, // "+"
				MINUS = 332, // "-"
				STAR = 333, // "*"
				POWER = 334, // "^"
				SLASH = 335, // "/"
				LESS = 336, // "<"
				GREATER = 337, // ">"
				ASSIGN = 338, // "="
				COMMA = 339, // ","
				NEG = 340 // NEG
			};
			/// Backward compatibility alias (Bison 3.6).
			typedef token_kind_type yytokentype;
		};

		/// Token kind, as returned by yylex.
		typedef token::yytokentype token_kind_type;

		/// Backward compatibility alias (Bison 3.6).
		typedef token_kind_type token_type;

		/// Symbol kinds.

		struct symbol_kind {

			enum symbol_kind_type {
				YYNTOKENS = 88, ///< Number of tokens.
				S_YYEMPTY = -2,
				S_YYEOF = 0, // "end of file"
				S_YYerror = 1, // error
				S_YYUNDEF = 2, // "invalid token"
				S_NUMD = 3, // NUMD
				S_NUMH = 4, // NUMH
				S_CTEZERO = 5, // CTEZERO
				S_oLE = 6, // oLE
				S_oGE = 7, // oGE
				S_oEQ = 8, // oEQ
				S_oNE = 9, // oNE
				S_oAND = 10, // oAND
				S_oOR = 11, // oOR
				S_oNOT = 12, // oNOT
				S_fSIN = 13, // fSIN
				S_fCOS = 14, // fCOS
				S_fROUND = 15, // fROUND
				S_fMOD = 16, // fMOD
				S_fTRUNC = 17, // fTRUNC
				S_fFRAC = 18, // fFRAC
				S_fEXP = 19, // fEXP
				S_fSQRT = 20, // fSQRT
				S_fLOG = 21, // fLOG
				S_fLN = 22, // fLN
				S_fVAL = 23, // fVAL
				S_fEVAL = 24, // fEVAL
				S_fLENG = 25, // fLENG
				S_fRND1 = 26, // fRND1
				S_fEXPO = 27, // fEXPO
				S_fNORM = 28, // fNORM
				S_fUNIF = 29, // fUNIF
				S_fWEIB = 30, // fWEIB
				S_fLOGN = 31, // fLOGN
				S_fGAMM = 32, // fGAMM
				S_fERLA = 33, // fERLA
				S_fTRIA = 34, // fTRIA
				S_fBETA = 35, // fBETA
				S_fDISC = 36, // fDISC
				S_fTNOW = 37, // fTNOW
				S_fTFIN = 38, // fTFIN
				S_fMAXREP = 39, // fMAXREP
				S_fNUMREP = 40, // fNUMREP
				S_fIDENT = 41, // fIDENT
				S_cIF = 42, // cIF
				S_cELSE = 43, // cELSE
				S_cFOR = 44, // cFOR
				S_cTO = 45, // cTO
				S_cDO = 46, // cDO
				S_ATRIB = 47, // ATRIB
				S_CSTAT = 48, // CSTAT
				S_fTAVG = 49, // fTAVG
				S_ILLEGAL = 50, // ILLEGAL
				S_RESOURCE = 51, // RESOURCE
				S_fNR = 52, // fNR
				S_fMR = 53, // fMR
				S_fIRF = 54, // fIRF
				S_fRESSEIZES = 55, // fRESSEIZES
				S_fSTATE = 56, // fSTATE
				S_fSETSUM = 57, // fSETSUM
				S_fRESUTIL = 58, // fRESUTIL
				S_QUEUE = 59, // QUEUE
				S_fNQ = 60, // fNQ
				S_fFIRSTINQ = 61, // fFIRSTINQ
				S_fLASTINQ = 62, // fLASTINQ
				S_fSAQUE = 63, // fSAQUE
				S_fAQUE = 64, // fAQUE
				S_fENTATRANK = 65, // fENTATRANK
				S_SET = 66, // SET
				S_fNUMSET = 67, // fNUMSET
				S_VARI = 68, // VARI
				S_FORM = 69, // FORM
				S_fNUMGR = 70, // fNUMGR
				S_fATRGR = 71, // fATRGR
				S_LPAREN = 72, // "("
				S_RPAREN = 73, // ")"
				S_LBRACKET = 74, // "["
				S_RBRACKET = 75, // "]"
				S_PLUS = 76, // "+"
				S_MINUS = 77, // "-"
				S_STAR = 78, // "*"
				S_POWER = 79, // "^"
				S_SLASH = 80, // "/"
				S_LESS = 81, // "<"
				S_GREATER = 82, // ">"
				S_ASSIGN = 83, // "="
				S_COMMA = 84, // ","
				S_NEG = 85, // NEG
				S_86_n_ = 86, // '\n'
				S_87_USER_ = 87, // "USER"
				S_YYACCEPT = 88, // $accept
				S_input = 89, // input
				S_expression = 90, // expression
				S_numero = 91, // numero
				S_aritmetica = 92, // aritmetica
				S_relacional = 93, // relacional
				S_comando = 94, // comando
				S_comandoIF = 95, // comandoIF
				S_comandoFOR = 96, // comandoFOR
				S_function = 97, // function
				S_kernelFunction = 98, // kernelFunction
				S_trigonFunction = 99, // trigonFunction
				S_mathFunction = 100, // mathFunction
				S_probFunction = 101, // probFunction
				S_userFunction = 102, // userFunction
				S_listaparm = 103, // listaparm
				S_atributo = 104, // atributo
				S_variavel = 105, // variavel
				S_formula = 106, // formula
				S_atribuicao = 107, // atribuicao
				S_pluginFunction = 108 // pluginFunction
			};
		};

		/// (Internal) symbol kind.
		typedef symbol_kind::symbol_kind_type symbol_kind_type;

		/// The number of tokens.
		static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

		/// A complete symbol.
		///
		/// Expects its Base type to provide access to the symbol kind
		/// via kind ().
		///
		/// Provide access to semantic value and location.

		template <typename Base>
		struct basic_symbol : Base {
			/// Alias to Base.
			typedef Base super_type;

			/// Default constructor.
			basic_symbol()
			: value()
			, location() {
			}

#if 201103L <= YY_CPLUSPLUS
			/// Move constructor.
			basic_symbol(basic_symbol&& that)
			: Base(std::move(that))
			, value()
			, location(std::move(that.location)) {
				switch (this->kind()) {
					case symbol_kind::S_NUMD: // NUMD
					case symbol_kind::S_NUMH: // NUMH
					case symbol_kind::S_CTEZERO: // CTEZERO
					case symbol_kind::S_oLE: // oLE
					case symbol_kind::S_oGE: // oGE
					case symbol_kind::S_oEQ: // oEQ
					case symbol_kind::S_oNE: // oNE
					case symbol_kind::S_oAND: // oAND
					case symbol_kind::S_oOR: // oOR
					case symbol_kind::S_oNOT: // oNOT
					case symbol_kind::S_fSIN: // fSIN
					case symbol_kind::S_fCOS: // fCOS
					case symbol_kind::S_fROUND: // fROUND
					case symbol_kind::S_fMOD: // fMOD
					case symbol_kind::S_fTRUNC: // fTRUNC
					case symbol_kind::S_fFRAC: // fFRAC
					case symbol_kind::S_fEXP: // fEXP
					case symbol_kind::S_fSQRT: // fSQRT
					case symbol_kind::S_fLOG: // fLOG
					case symbol_kind::S_fLN: // fLN
					case symbol_kind::S_fVAL: // fVAL
					case symbol_kind::S_fEVAL: // fEVAL
					case symbol_kind::S_fLENG: // fLENG
					case symbol_kind::S_fRND1: // fRND1
					case symbol_kind::S_fEXPO: // fEXPO
					case symbol_kind::S_fNORM: // fNORM
					case symbol_kind::S_fUNIF: // fUNIF
					case symbol_kind::S_fWEIB: // fWEIB
					case symbol_kind::S_fLOGN: // fLOGN
					case symbol_kind::S_fGAMM: // fGAMM
					case symbol_kind::S_fERLA: // fERLA
					case symbol_kind::S_fTRIA: // fTRIA
					case symbol_kind::S_fBETA: // fBETA
					case symbol_kind::S_fDISC: // fDISC
					case symbol_kind::S_fTNOW: // fTNOW
					case symbol_kind::S_fTFIN: // fTFIN
					case symbol_kind::S_fMAXREP: // fMAXREP
					case symbol_kind::S_fNUMREP: // fNUMREP
					case symbol_kind::S_fIDENT: // fIDENT
					case symbol_kind::S_cIF: // cIF
					case symbol_kind::S_cELSE: // cELSE
					case symbol_kind::S_cFOR: // cFOR
					case symbol_kind::S_cTO: // cTO
					case symbol_kind::S_cDO: // cDO
					case symbol_kind::S_ATRIB: // ATRIB
					case symbol_kind::S_CSTAT: // CSTAT
					case symbol_kind::S_fTAVG: // fTAVG
					case symbol_kind::S_ILLEGAL: // ILLEGAL
					case symbol_kind::S_RESOURCE: // RESOURCE
					case symbol_kind::S_fNR: // fNR
					case symbol_kind::S_fMR: // fMR
					case symbol_kind::S_fIRF: // fIRF
					case symbol_kind::S_fRESSEIZES: // fRESSEIZES
					case symbol_kind::S_fSTATE: // fSTATE
					case symbol_kind::S_fSETSUM: // fSETSUM
					case symbol_kind::S_fRESUTIL: // fRESUTIL
					case symbol_kind::S_QUEUE: // QUEUE
					case symbol_kind::S_fNQ: // fNQ
					case symbol_kind::S_fFIRSTINQ: // fFIRSTINQ
					case symbol_kind::S_fLASTINQ: // fLASTINQ
					case symbol_kind::S_fSAQUE: // fSAQUE
					case symbol_kind::S_fAQUE: // fAQUE
					case symbol_kind::S_fENTATRANK: // fENTATRANK
					case symbol_kind::S_SET: // SET
					case symbol_kind::S_fNUMSET: // fNUMSET
					case symbol_kind::S_VARI: // VARI
					case symbol_kind::S_FORM: // FORM
					case symbol_kind::S_fNUMGR: // fNUMGR
					case symbol_kind::S_fATRGR: // fATRGR
					case symbol_kind::S_input: // input
					case symbol_kind::S_expression: // expression
					case symbol_kind::S_numero: // numero
					case symbol_kind::S_aritmetica: // aritmetica
					case symbol_kind::S_relacional: // relacional
					case symbol_kind::S_comando: // comando
					case symbol_kind::S_comandoIF: // comandoIF
					case symbol_kind::S_comandoFOR: // comandoFOR
					case symbol_kind::S_function: // function
					case symbol_kind::S_kernelFunction: // kernelFunction
					case symbol_kind::S_trigonFunction: // trigonFunction
					case symbol_kind::S_mathFunction: // mathFunction
					case symbol_kind::S_probFunction: // probFunction
					case symbol_kind::S_userFunction: // userFunction
					case symbol_kind::S_listaparm: // listaparm
					case symbol_kind::S_atributo: // atributo
					case symbol_kind::S_variavel: // variavel
					case symbol_kind::S_formula: // formula
					case symbol_kind::S_atribuicao: // atribuicao
					case symbol_kind::S_pluginFunction: // pluginFunction
						value.move< obj_t > (std::move(that.value));
						break;

					default:
						break;
				}

			}
#endif

			/// Copy constructor.
			basic_symbol(const basic_symbol& that);

			/// Constructors for typed symbols.
#if 201103L <= YY_CPLUSPLUS
			basic_symbol(typename Base::kind_type t, location_type&& l)
			: Base(t)
			, location(std::move(l)) {
			}
#else
			basic_symbol(typename Base::kind_type t, const location_type& l)
			: Base(t)
			, location(l) {
			}
#endif

#if 201103L <= YY_CPLUSPLUS
			basic_symbol(typename Base::kind_type t, obj_t&& v, location_type&& l)
			: Base(t)
			, value(std::move(v))
			, location(std::move(l)) {
			}
#else
			basic_symbol(typename Base::kind_type t, const obj_t& v, const location_type& l)
			: Base(t)
			, value(v)
			, location(l) {
			}
#endif

			/// Destroy the symbol.
			~basic_symbol() {
				clear();
			}

			/// Destroy contents, and record that is empty.
			void clear() YY_NOEXCEPT {
				// User destructor.
				symbol_kind_type yykind = this->kind();
				basic_symbol<Base>& yysym = *this;
				(void) yysym;
				switch (yykind) {
					default:
						break;
				}

				// Value type destructor.
				switch (yykind) {
					case symbol_kind::S_NUMD: // NUMD
					case symbol_kind::S_NUMH: // NUMH
					case symbol_kind::S_CTEZERO: // CTEZERO
					case symbol_kind::S_oLE: // oLE
					case symbol_kind::S_oGE: // oGE
					case symbol_kind::S_oEQ: // oEQ
					case symbol_kind::S_oNE: // oNE
					case symbol_kind::S_oAND: // oAND
					case symbol_kind::S_oOR: // oOR
					case symbol_kind::S_oNOT: // oNOT
					case symbol_kind::S_fSIN: // fSIN
					case symbol_kind::S_fCOS: // fCOS
					case symbol_kind::S_fROUND: // fROUND
					case symbol_kind::S_fMOD: // fMOD
					case symbol_kind::S_fTRUNC: // fTRUNC
					case symbol_kind::S_fFRAC: // fFRAC
					case symbol_kind::S_fEXP: // fEXP
					case symbol_kind::S_fSQRT: // fSQRT
					case symbol_kind::S_fLOG: // fLOG
					case symbol_kind::S_fLN: // fLN
					case symbol_kind::S_fVAL: // fVAL
					case symbol_kind::S_fEVAL: // fEVAL
					case symbol_kind::S_fLENG: // fLENG
					case symbol_kind::S_fRND1: // fRND1
					case symbol_kind::S_fEXPO: // fEXPO
					case symbol_kind::S_fNORM: // fNORM
					case symbol_kind::S_fUNIF: // fUNIF
					case symbol_kind::S_fWEIB: // fWEIB
					case symbol_kind::S_fLOGN: // fLOGN
					case symbol_kind::S_fGAMM: // fGAMM
					case symbol_kind::S_fERLA: // fERLA
					case symbol_kind::S_fTRIA: // fTRIA
					case symbol_kind::S_fBETA: // fBETA
					case symbol_kind::S_fDISC: // fDISC
					case symbol_kind::S_fTNOW: // fTNOW
					case symbol_kind::S_fTFIN: // fTFIN
					case symbol_kind::S_fMAXREP: // fMAXREP
					case symbol_kind::S_fNUMREP: // fNUMREP
					case symbol_kind::S_fIDENT: // fIDENT
					case symbol_kind::S_cIF: // cIF
					case symbol_kind::S_cELSE: // cELSE
					case symbol_kind::S_cFOR: // cFOR
					case symbol_kind::S_cTO: // cTO
					case symbol_kind::S_cDO: // cDO
					case symbol_kind::S_ATRIB: // ATRIB
					case symbol_kind::S_CSTAT: // CSTAT
					case symbol_kind::S_fTAVG: // fTAVG
					case symbol_kind::S_ILLEGAL: // ILLEGAL
					case symbol_kind::S_RESOURCE: // RESOURCE
					case symbol_kind::S_fNR: // fNR
					case symbol_kind::S_fMR: // fMR
					case symbol_kind::S_fIRF: // fIRF
					case symbol_kind::S_fRESSEIZES: // fRESSEIZES
					case symbol_kind::S_fSTATE: // fSTATE
					case symbol_kind::S_fSETSUM: // fSETSUM
					case symbol_kind::S_fRESUTIL: // fRESUTIL
					case symbol_kind::S_QUEUE: // QUEUE
					case symbol_kind::S_fNQ: // fNQ
					case symbol_kind::S_fFIRSTINQ: // fFIRSTINQ
					case symbol_kind::S_fLASTINQ: // fLASTINQ
					case symbol_kind::S_fSAQUE: // fSAQUE
					case symbol_kind::S_fAQUE: // fAQUE
					case symbol_kind::S_fENTATRANK: // fENTATRANK
					case symbol_kind::S_SET: // SET
					case symbol_kind::S_fNUMSET: // fNUMSET
					case symbol_kind::S_VARI: // VARI
					case symbol_kind::S_FORM: // FORM
					case symbol_kind::S_fNUMGR: // fNUMGR
					case symbol_kind::S_fATRGR: // fATRGR
					case symbol_kind::S_input: // input
					case symbol_kind::S_expression: // expression
					case symbol_kind::S_numero: // numero
					case symbol_kind::S_aritmetica: // aritmetica
					case symbol_kind::S_relacional: // relacional
					case symbol_kind::S_comando: // comando
					case symbol_kind::S_comandoIF: // comandoIF
					case symbol_kind::S_comandoFOR: // comandoFOR
					case symbol_kind::S_function: // function
					case symbol_kind::S_kernelFunction: // kernelFunction
					case symbol_kind::S_trigonFunction: // trigonFunction
					case symbol_kind::S_mathFunction: // mathFunction
					case symbol_kind::S_probFunction: // probFunction
					case symbol_kind::S_userFunction: // userFunction
					case symbol_kind::S_listaparm: // listaparm
					case symbol_kind::S_atributo: // atributo
					case symbol_kind::S_variavel: // variavel
					case symbol_kind::S_formula: // formula
					case symbol_kind::S_atribuicao: // atribuicao
					case symbol_kind::S_pluginFunction: // pluginFunction
						value.template destroy< obj_t > ();
						break;

					default:
						break;
				}

				Base::clear();
			}

			/// The user-facing name of this symbol.
			std::string name() const YY_NOEXCEPT {
				return genesyspp_parser::symbol_name(this->kind());
			}

			/// Backward compatibility (Bison 3.6).
			symbol_kind_type type_get() const YY_NOEXCEPT;

			/// Whether empty.
			bool empty() const YY_NOEXCEPT;

			/// Destructive move, \a s is emptied into this.
			void move(basic_symbol& s);

			/// The semantic value.
			semantic_type value;

			/// The location.
			location_type location;

		private:
#if YY_CPLUSPLUS < 201103L
			/// Assignment operator.
			basic_symbol& operator=(const basic_symbol& that);
#endif
		};

		/// Type access provider for token (enum) based symbols.

		struct by_kind {
			/// Default constructor.
			by_kind();

#if 201103L <= YY_CPLUSPLUS
			/// Move constructor.
			by_kind(by_kind&& that);
#endif

			/// Copy constructor.
			by_kind(const by_kind& that);

			/// The symbol kind as needed by the constructor.
			typedef token_kind_type kind_type;

			/// Constructor from (external) token numbers.
			by_kind(kind_type t);

			/// Record that this symbol is empty.
			void clear() YY_NOEXCEPT;

			/// Steal the symbol kind from \a that.
			void move(by_kind& that);

			/// The (internal) type number (corresponding to \a type).
			/// \a empty when empty.
			symbol_kind_type kind() const YY_NOEXCEPT;

			/// Backward compatibility (Bison 3.6).
			symbol_kind_type type_get() const YY_NOEXCEPT;

			/// The symbol kind.
			/// \a S_YYEMPTY when empty.
			symbol_kind_type kind_;
		};

		/// Backward compatibility for a private implementation detail (Bison 3.6).
		typedef by_kind by_type;

		/// "External" symbols: returned by the scanner.

		struct symbol_type : basic_symbol<by_kind> {
			/// Superclass.
			typedef basic_symbol<by_kind> super_type;

			/// Empty symbol.
			symbol_type() {
			}

			/// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
			symbol_type(int tok, location_type l)
			: super_type(token_type(tok), std::move(l))
#else
			symbol_type(int tok, const location_type& l)
			: super_type(token_type(tok), l)
#endif
			{
				YY_ASSERT(tok == token::END
						|| (token::YYerror <= tok && tok <= token::YYUNDEF)
						|| (token::LPAREN <= tok && tok <= token::NEG)
						|| tok == 10
						|| tok == 341);
			}
#if 201103L <= YY_CPLUSPLUS
			symbol_type(int tok, obj_t v, location_type l)
			: super_type(token_type(tok), std::move(v), std::move(l))
#else
			symbol_type(int tok, const obj_t& v, const location_type& l)
			: super_type(token_type(tok), v, l)
#endif
			{
				YY_ASSERT((token::NUMD <= tok && tok <= token::fATRGR));
			}
		};

		/// Build a parser object.
		genesyspp_parser(genesyspp_driver& driver_yyarg);
		virtual ~genesyspp_parser();

#if 201103L <= YY_CPLUSPLUS
		/// Non copyable.
		genesyspp_parser(const genesyspp_parser&) = delete;
		/// Non copyable.
		genesyspp_parser& operator=(const genesyspp_parser&) = delete;
#endif

		/// Parse.  An alias for parse ().
		/// \returns  0 iff parsing succeeded.
		int operator()();

		/// Parse.
		/// \returns  0 iff parsing succeeded.
		virtual int parse();

#if YYDEBUG
		/// The current debugging stream.
		std::ostream& debug_stream() const YY_ATTRIBUTE_PURE;
		/// Set the current debugging stream.
		void set_debug_stream(std::ostream &);

		/// Type for debugging levels.
		typedef int debug_level_type;
		/// The current debugging level.
		debug_level_type debug_level() const YY_ATTRIBUTE_PURE;
		/// Set the current debugging level.
		void set_debug_level(debug_level_type l);
#endif

		/// Report a syntax error.
		/// \param loc    where the syntax error is found.
		/// \param msg    a description of the syntax error.
		virtual void error(const location_type& loc, const std::string& msg);

		/// Report a syntax error.
		void error(const syntax_error& err);

		/// The user-facing name of the symbol whose (internal) number is
		/// YYSYMBOL.  No bounds checking.
		static std::string symbol_name(symbol_kind_type yysymbol);

		// Implementation of make_symbol for each symbol type.
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_END(location_type l) {
			return symbol_type(token::END, std::move(l));
		}
#else
		static
		symbol_type
		make_END(const location_type& l) {
			return symbol_type(token::END, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_YYerror(location_type l) {
			return symbol_type(token::YYerror, std::move(l));
		}
#else
		static
		symbol_type
		make_YYerror(const location_type& l) {
			return symbol_type(token::YYerror, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_YYUNDEF(location_type l) {
			return symbol_type(token::YYUNDEF, std::move(l));
		}
#else
		static
		symbol_type
		make_YYUNDEF(const location_type& l) {
			return symbol_type(token::YYUNDEF, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_NUMD(obj_t v, location_type l) {
			return symbol_type(token::NUMD, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_NUMD(const obj_t& v, const location_type& l) {
			return symbol_type(token::NUMD, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_NUMH(obj_t v, location_type l) {
			return symbol_type(token::NUMH, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_NUMH(const obj_t& v, const location_type& l) {
			return symbol_type(token::NUMH, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_CTEZERO(obj_t v, location_type l) {
			return symbol_type(token::CTEZERO, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_CTEZERO(const obj_t& v, const location_type& l) {
			return symbol_type(token::CTEZERO, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_oLE(obj_t v, location_type l) {
			return symbol_type(token::oLE, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_oLE(const obj_t& v, const location_type& l) {
			return symbol_type(token::oLE, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_oGE(obj_t v, location_type l) {
			return symbol_type(token::oGE, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_oGE(const obj_t& v, const location_type& l) {
			return symbol_type(token::oGE, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_oEQ(obj_t v, location_type l) {
			return symbol_type(token::oEQ, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_oEQ(const obj_t& v, const location_type& l) {
			return symbol_type(token::oEQ, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_oNE(obj_t v, location_type l) {
			return symbol_type(token::oNE, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_oNE(const obj_t& v, const location_type& l) {
			return symbol_type(token::oNE, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_oAND(obj_t v, location_type l) {
			return symbol_type(token::oAND, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_oAND(const obj_t& v, const location_type& l) {
			return symbol_type(token::oAND, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_oOR(obj_t v, location_type l) {
			return symbol_type(token::oOR, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_oOR(const obj_t& v, const location_type& l) {
			return symbol_type(token::oOR, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_oNOT(obj_t v, location_type l) {
			return symbol_type(token::oNOT, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_oNOT(const obj_t& v, const location_type& l) {
			return symbol_type(token::oNOT, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fSIN(obj_t v, location_type l) {
			return symbol_type(token::fSIN, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fSIN(const obj_t& v, const location_type& l) {
			return symbol_type(token::fSIN, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fCOS(obj_t v, location_type l) {
			return symbol_type(token::fCOS, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fCOS(const obj_t& v, const location_type& l) {
			return symbol_type(token::fCOS, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fROUND(obj_t v, location_type l) {
			return symbol_type(token::fROUND, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fROUND(const obj_t& v, const location_type& l) {
			return symbol_type(token::fROUND, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fMOD(obj_t v, location_type l) {
			return symbol_type(token::fMOD, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fMOD(const obj_t& v, const location_type& l) {
			return symbol_type(token::fMOD, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fTRUNC(obj_t v, location_type l) {
			return symbol_type(token::fTRUNC, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fTRUNC(const obj_t& v, const location_type& l) {
			return symbol_type(token::fTRUNC, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fFRAC(obj_t v, location_type l) {
			return symbol_type(token::fFRAC, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fFRAC(const obj_t& v, const location_type& l) {
			return symbol_type(token::fFRAC, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fEXP(obj_t v, location_type l) {
			return symbol_type(token::fEXP, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fEXP(const obj_t& v, const location_type& l) {
			return symbol_type(token::fEXP, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fSQRT(obj_t v, location_type l) {
			return symbol_type(token::fSQRT, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fSQRT(const obj_t& v, const location_type& l) {
			return symbol_type(token::fSQRT, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fLOG(obj_t v, location_type l) {
			return symbol_type(token::fLOG, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fLOG(const obj_t& v, const location_type& l) {
			return symbol_type(token::fLOG, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fLN(obj_t v, location_type l) {
			return symbol_type(token::fLN, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fLN(const obj_t& v, const location_type& l) {
			return symbol_type(token::fLN, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fVAL(obj_t v, location_type l) {
			return symbol_type(token::fVAL, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fVAL(const obj_t& v, const location_type& l) {
			return symbol_type(token::fVAL, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fEVAL(obj_t v, location_type l) {
			return symbol_type(token::fEVAL, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fEVAL(const obj_t& v, const location_type& l) {
			return symbol_type(token::fEVAL, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fLENG(obj_t v, location_type l) {
			return symbol_type(token::fLENG, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fLENG(const obj_t& v, const location_type& l) {
			return symbol_type(token::fLENG, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fRND1(obj_t v, location_type l) {
			return symbol_type(token::fRND1, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fRND1(const obj_t& v, const location_type& l) {
			return symbol_type(token::fRND1, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fEXPO(obj_t v, location_type l) {
			return symbol_type(token::fEXPO, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fEXPO(const obj_t& v, const location_type& l) {
			return symbol_type(token::fEXPO, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fNORM(obj_t v, location_type l) {
			return symbol_type(token::fNORM, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fNORM(const obj_t& v, const location_type& l) {
			return symbol_type(token::fNORM, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fUNIF(obj_t v, location_type l) {
			return symbol_type(token::fUNIF, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fUNIF(const obj_t& v, const location_type& l) {
			return symbol_type(token::fUNIF, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fWEIB(obj_t v, location_type l) {
			return symbol_type(token::fWEIB, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fWEIB(const obj_t& v, const location_type& l) {
			return symbol_type(token::fWEIB, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fLOGN(obj_t v, location_type l) {
			return symbol_type(token::fLOGN, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fLOGN(const obj_t& v, const location_type& l) {
			return symbol_type(token::fLOGN, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fGAMM(obj_t v, location_type l) {
			return symbol_type(token::fGAMM, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fGAMM(const obj_t& v, const location_type& l) {
			return symbol_type(token::fGAMM, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fERLA(obj_t v, location_type l) {
			return symbol_type(token::fERLA, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fERLA(const obj_t& v, const location_type& l) {
			return symbol_type(token::fERLA, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fTRIA(obj_t v, location_type l) {
			return symbol_type(token::fTRIA, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fTRIA(const obj_t& v, const location_type& l) {
			return symbol_type(token::fTRIA, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fBETA(obj_t v, location_type l) {
			return symbol_type(token::fBETA, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fBETA(const obj_t& v, const location_type& l) {
			return symbol_type(token::fBETA, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fDISC(obj_t v, location_type l) {
			return symbol_type(token::fDISC, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fDISC(const obj_t& v, const location_type& l) {
			return symbol_type(token::fDISC, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fTNOW(obj_t v, location_type l) {
			return symbol_type(token::fTNOW, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fTNOW(const obj_t& v, const location_type& l) {
			return symbol_type(token::fTNOW, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fTFIN(obj_t v, location_type l) {
			return symbol_type(token::fTFIN, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fTFIN(const obj_t& v, const location_type& l) {
			return symbol_type(token::fTFIN, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fMAXREP(obj_t v, location_type l) {
			return symbol_type(token::fMAXREP, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fMAXREP(const obj_t& v, const location_type& l) {
			return symbol_type(token::fMAXREP, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fNUMREP(obj_t v, location_type l) {
			return symbol_type(token::fNUMREP, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fNUMREP(const obj_t& v, const location_type& l) {
			return symbol_type(token::fNUMREP, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fIDENT(obj_t v, location_type l) {
			return symbol_type(token::fIDENT, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fIDENT(const obj_t& v, const location_type& l) {
			return symbol_type(token::fIDENT, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_cIF(obj_t v, location_type l) {
			return symbol_type(token::cIF, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_cIF(const obj_t& v, const location_type& l) {
			return symbol_type(token::cIF, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_cELSE(obj_t v, location_type l) {
			return symbol_type(token::cELSE, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_cELSE(const obj_t& v, const location_type& l) {
			return symbol_type(token::cELSE, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_cFOR(obj_t v, location_type l) {
			return symbol_type(token::cFOR, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_cFOR(const obj_t& v, const location_type& l) {
			return symbol_type(token::cFOR, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_cTO(obj_t v, location_type l) {
			return symbol_type(token::cTO, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_cTO(const obj_t& v, const location_type& l) {
			return symbol_type(token::cTO, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_cDO(obj_t v, location_type l) {
			return symbol_type(token::cDO, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_cDO(const obj_t& v, const location_type& l) {
			return symbol_type(token::cDO, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_ATRIB(obj_t v, location_type l) {
			return symbol_type(token::ATRIB, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_ATRIB(const obj_t& v, const location_type& l) {
			return symbol_type(token::ATRIB, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_CSTAT(obj_t v, location_type l) {
			return symbol_type(token::CSTAT, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_CSTAT(const obj_t& v, const location_type& l) {
			return symbol_type(token::CSTAT, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fTAVG(obj_t v, location_type l) {
			return symbol_type(token::fTAVG, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fTAVG(const obj_t& v, const location_type& l) {
			return symbol_type(token::fTAVG, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_ILLEGAL(obj_t v, location_type l) {
			return symbol_type(token::ILLEGAL, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_ILLEGAL(const obj_t& v, const location_type& l) {
			return symbol_type(token::ILLEGAL, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_RESOURCE(obj_t v, location_type l) {
			return symbol_type(token::RESOURCE, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_RESOURCE(const obj_t& v, const location_type& l) {
			return symbol_type(token::RESOURCE, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fNR(obj_t v, location_type l) {
			return symbol_type(token::fNR, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fNR(const obj_t& v, const location_type& l) {
			return symbol_type(token::fNR, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fMR(obj_t v, location_type l) {
			return symbol_type(token::fMR, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fMR(const obj_t& v, const location_type& l) {
			return symbol_type(token::fMR, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fIRF(obj_t v, location_type l) {
			return symbol_type(token::fIRF, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fIRF(const obj_t& v, const location_type& l) {
			return symbol_type(token::fIRF, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fRESSEIZES(obj_t v, location_type l) {
			return symbol_type(token::fRESSEIZES, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fRESSEIZES(const obj_t& v, const location_type& l) {
			return symbol_type(token::fRESSEIZES, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fSTATE(obj_t v, location_type l) {
			return symbol_type(token::fSTATE, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fSTATE(const obj_t& v, const location_type& l) {
			return symbol_type(token::fSTATE, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fSETSUM(obj_t v, location_type l) {
			return symbol_type(token::fSETSUM, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fSETSUM(const obj_t& v, const location_type& l) {
			return symbol_type(token::fSETSUM, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fRESUTIL(obj_t v, location_type l) {
			return symbol_type(token::fRESUTIL, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fRESUTIL(const obj_t& v, const location_type& l) {
			return symbol_type(token::fRESUTIL, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_QUEUE(obj_t v, location_type l) {
			return symbol_type(token::QUEUE, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_QUEUE(const obj_t& v, const location_type& l) {
			return symbol_type(token::QUEUE, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fNQ(obj_t v, location_type l) {
			return symbol_type(token::fNQ, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fNQ(const obj_t& v, const location_type& l) {
			return symbol_type(token::fNQ, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fFIRSTINQ(obj_t v, location_type l) {
			return symbol_type(token::fFIRSTINQ, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fFIRSTINQ(const obj_t& v, const location_type& l) {
			return symbol_type(token::fFIRSTINQ, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fLASTINQ(obj_t v, location_type l) {
			return symbol_type(token::fLASTINQ, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fLASTINQ(const obj_t& v, const location_type& l) {
			return symbol_type(token::fLASTINQ, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fSAQUE(obj_t v, location_type l) {
			return symbol_type(token::fSAQUE, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fSAQUE(const obj_t& v, const location_type& l) {
			return symbol_type(token::fSAQUE, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fAQUE(obj_t v, location_type l) {
			return symbol_type(token::fAQUE, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fAQUE(const obj_t& v, const location_type& l) {
			return symbol_type(token::fAQUE, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fENTATRANK(obj_t v, location_type l) {
			return symbol_type(token::fENTATRANK, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fENTATRANK(const obj_t& v, const location_type& l) {
			return symbol_type(token::fENTATRANK, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_SET(obj_t v, location_type l) {
			return symbol_type(token::SET, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_SET(const obj_t& v, const location_type& l) {
			return symbol_type(token::SET, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fNUMSET(obj_t v, location_type l) {
			return symbol_type(token::fNUMSET, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fNUMSET(const obj_t& v, const location_type& l) {
			return symbol_type(token::fNUMSET, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_VARI(obj_t v, location_type l) {
			return symbol_type(token::VARI, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_VARI(const obj_t& v, const location_type& l) {
			return symbol_type(token::VARI, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_FORM(obj_t v, location_type l) {
			return symbol_type(token::FORM, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_FORM(const obj_t& v, const location_type& l) {
			return symbol_type(token::FORM, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fNUMGR(obj_t v, location_type l) {
			return symbol_type(token::fNUMGR, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fNUMGR(const obj_t& v, const location_type& l) {
			return symbol_type(token::fNUMGR, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_fATRGR(obj_t v, location_type l) {
			return symbol_type(token::fATRGR, std::move(v), std::move(l));
		}
#else
		static
		symbol_type
		make_fATRGR(const obj_t& v, const location_type& l) {
			return symbol_type(token::fATRGR, v, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_LPAREN(location_type l) {
			return symbol_type(token::LPAREN, std::move(l));
		}
#else
		static
		symbol_type
		make_LPAREN(const location_type& l) {
			return symbol_type(token::LPAREN, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_RPAREN(location_type l) {
			return symbol_type(token::RPAREN, std::move(l));
		}
#else
		static
		symbol_type
		make_RPAREN(const location_type& l) {
			return symbol_type(token::RPAREN, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_LBRACKET(location_type l) {
			return symbol_type(token::LBRACKET, std::move(l));
		}
#else
		static
		symbol_type
		make_LBRACKET(const location_type& l) {
			return symbol_type(token::LBRACKET, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_RBRACKET(location_type l) {
			return symbol_type(token::RBRACKET, std::move(l));
		}
#else
		static
		symbol_type
		make_RBRACKET(const location_type& l) {
			return symbol_type(token::RBRACKET, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_PLUS(location_type l) {
			return symbol_type(token::PLUS, std::move(l));
		}
#else
		static
		symbol_type
		make_PLUS(const location_type& l) {
			return symbol_type(token::PLUS, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_MINUS(location_type l) {
			return symbol_type(token::MINUS, std::move(l));
		}
#else
		static
		symbol_type
		make_MINUS(const location_type& l) {
			return symbol_type(token::MINUS, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_STAR(location_type l) {
			return symbol_type(token::STAR, std::move(l));
		}
#else
		static
		symbol_type
		make_STAR(const location_type& l) {
			return symbol_type(token::STAR, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_POWER(location_type l) {
			return symbol_type(token::POWER, std::move(l));
		}
#else
		static
		symbol_type
		make_POWER(const location_type& l) {
			return symbol_type(token::POWER, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_SLASH(location_type l) {
			return symbol_type(token::SLASH, std::move(l));
		}
#else
		static
		symbol_type
		make_SLASH(const location_type& l) {
			return symbol_type(token::SLASH, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_LESS(location_type l) {
			return symbol_type(token::LESS, std::move(l));
		}
#else
		static
		symbol_type
		make_LESS(const location_type& l) {
			return symbol_type(token::LESS, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_GREATER(location_type l) {
			return symbol_type(token::GREATER, std::move(l));
		}
#else
		static
		symbol_type
		make_GREATER(const location_type& l) {
			return symbol_type(token::GREATER, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_ASSIGN(location_type l) {
			return symbol_type(token::ASSIGN, std::move(l));
		}
#else
		static
		symbol_type
		make_ASSIGN(const location_type& l) {
			return symbol_type(token::ASSIGN, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_COMMA(location_type l) {
			return symbol_type(token::COMMA, std::move(l));
		}
#else
		static
		symbol_type
		make_COMMA(const location_type& l) {
			return symbol_type(token::COMMA, l);
		}
#endif
#if 201103L <= YY_CPLUSPLUS
		static
		symbol_type
		make_NEG(location_type l) {
			return symbol_type(token::NEG, std::move(l));
		}
#else
		static
		symbol_type
		make_NEG(const location_type& l) {
			return symbol_type(token::NEG, l);
		}
#endif

		class context {
		public:
			context(const genesyspp_parser& yyparser, const symbol_type& yyla);
			const symbol_type& lookahead() const YY_NOEXCEPT {
				return yyla_;
			}
			symbol_kind_type token() const YY_NOEXCEPT {
				return yyla_.kind();
			}
			const location_type& location() const YY_NOEXCEPT {
				return yyla_.location;
			}

			/// Put in YYARG at most YYARGN of the expected tokens, and return the
			/// number of tokens stored in YYARG.  If YYARG is null, return the
			/// number of expected tokens (guaranteed to be less than YYNTOKENS).
			int expected_tokens(symbol_kind_type yyarg[], int yyargn) const;

		private:
			const genesyspp_parser& yyparser_;
			const symbol_type& yyla_;
		};

	private:
#if YY_CPLUSPLUS < 201103L
		/// Non copyable.
		genesyspp_parser(const genesyspp_parser&);
		/// Non copyable.
		genesyspp_parser& operator=(const genesyspp_parser&);
#endif


		/// Stored state numbers (used for stacks).
		typedef short state_type;

		/// The arguments of the error message.
		int yy_syntax_error_arguments_(const context& yyctx,
				symbol_kind_type yyarg[], int yyargn) const;

		/// Generate an error message.
		/// \param yyctx     the context in which the error occurred.
		virtual std::string yysyntax_error_(const context& yyctx) const;
		/// Compute post-reduction state.
		/// \param yystate   the current state
		/// \param yysym     the nonterminal to push on the stack
		static state_type yy_lr_goto_state_(state_type yystate, int yysym);

		/// Whether the given \c yypact_ value indicates a defaulted state.
		/// \param yyvalue   the value to check
		static bool yy_pact_value_is_default_(int yyvalue);

		/// Whether the given \c yytable_ value indicates a syntax error.
		/// \param yyvalue   the value to check
		static bool yy_table_value_is_error_(int yyvalue);

		static const short yypact_ninf_;
		static const signed char yytable_ninf_;

		/// Convert a scanner token kind \a t to a symbol kind.
		/// In theory \a t should be a token_kind_type, but character literals
		/// are valid, yet not members of the token_type enum.
		static symbol_kind_type yytranslate_(int t);

		/// Convert the symbol name \a n to a form suitable for a diagnostic.
		static std::string yytnamerr_(const char *yystr);

		/// For a symbol, its name in clear.
		static const char* const yytname_[];


		// Tables.
		// YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
		// STATE-NUM.
		static const short yypact_[];

		// YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
		// Performed when YYTABLE does not specify something else to do.  Zero
		// means the default is an error.
		static const signed char yydefact_[];

		// YYPGOTO[NTERM-NUM].
		static const short yypgoto_[];

		// YYDEFGOTO[NTERM-NUM].
		static const unsigned char yydefgoto_[];

		// YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
		// positive, shift that token.  If negative, reduce the rule whose
		// number is the opposite.  If YYTABLE_NINF, syntax error.
		static const short yytable_[];

		static const short yycheck_[];

		// YYSTOS[STATE-NUM] -- The (internal number of the) accessing
		// symbol of state STATE-NUM.
		static const signed char yystos_[];

		// YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
		static const signed char yyr1_[];

		// YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
		static const signed char yyr2_[];


#if YYDEBUG
		// YYRLINE[YYN] -- Source line where rule number YYN was defined.
		static const short yyrline_[];
		/// Report on the debug stream that the rule \a r is going to be reduced.
		virtual void yy_reduce_print_(int r) const;
		/// Print the state stack on the debug stream.
		virtual void yy_stack_print_() const;

		/// Debugging level.
		int yydebug_;
		/// Debug stream.
		std::ostream* yycdebug_;

		/// \brief Display a symbol kind, value and location.
		/// \param yyo    The output stream.
		/// \param yysym  The symbol.
		template <typename Base>
		void yy_print_(std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

		/// \brief Reclaim the memory associated to a symbol.
		/// \param yymsg     Why this token is reclaimed.
		///                  If null, print nothing.
		/// \param yysym     The symbol.
		template <typename Base>
		void yy_destroy_(const char* yymsg, basic_symbol<Base>& yysym) const;

	private:
		/// Type access provider for state based symbols.

		struct by_state {
			/// Default constructor.
			by_state() YY_NOEXCEPT;

			/// The symbol kind as needed by the constructor.
			typedef state_type kind_type;

			/// Constructor.
			by_state(kind_type s) YY_NOEXCEPT;

			/// Copy constructor.
			by_state(const by_state& that) YY_NOEXCEPT;

			/// Record that this symbol is empty.
			void clear() YY_NOEXCEPT;

			/// Steal the symbol kind from \a that.
			void move(by_state& that);

			/// The symbol kind (corresponding to \a state).
			/// \a symbol_kind::S_YYEMPTY when empty.
			symbol_kind_type kind() const YY_NOEXCEPT;

			/// The state number used to denote an empty symbol.
			/// We use the initial state, as it does not have a value.

			enum {
				empty_state = 0
			};

			/// The state.
			/// \a empty when empty.
			state_type state;
		};

		/// "Internal" symbol: element of the stack.

		struct stack_symbol_type : basic_symbol<by_state> {
			/// Superclass.
			typedef basic_symbol<by_state> super_type;
			/// Construct an empty symbol.
			stack_symbol_type();
			/// Move or copy construction.
			stack_symbol_type(YY_RVREF(stack_symbol_type) that);
			/// Steal the contents from \a sym to build this.
			stack_symbol_type(state_type s, YY_MOVE_REF(symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
			/// Assignment, needed by push_back by some old implementations.
			/// Moves the contents of that.
			stack_symbol_type& operator=(stack_symbol_type& that);

			/// Assignment, needed by push_back by other implementations.
			/// Needed by some other old implementations.
			stack_symbol_type& operator=(const stack_symbol_type& that);
#endif
		};

		/// A stack with random access from its top.

		template <typename T, typename S = std::vector<T> >
		class stack {
		public:
			// Hide our reversed order.
			typedef typename S::iterator iterator;
			typedef typename S::const_iterator const_iterator;
			typedef typename S::size_type size_type;
			typedef typename std::ptrdiff_t index_type;
			stack(size_type n = 200)
			: seq_(n) {
			}

#if 201103L <= YY_CPLUSPLUS
			/// Non copyable.
			stack(const stack&) = delete;
			/// Non copyable.
			stack& operator=(const stack&) = delete;
#endif

			/// Random access.
			///
			/// Index 0 returns the topmost element.
			const T&
			operator[](index_type i) const {
				return seq_[size_type(size() - 1 - i)];
			}

			/// Random access.
			///
			/// Index 0 returns the topmost element.
			T&
			operator[](index_type i) {
				return seq_[size_type(size() - 1 - i)];
			}

			/// Steal the contents of \a t.
			///
			/// Close to move-semantics.
			void
			push(YY_MOVE_REF(T) t) {
				seq_.push_back(T());
				operator[](0).move(t);
			}

			/// Pop elements from the stack.
			void
			pop(std::ptrdiff_t n = 1) YY_NOEXCEPT {
				for (; 0 < n; --n)
					seq_.pop_back();
			}

			/// Pop all elements from the stack.
			void
			clear() YY_NOEXCEPT {
				seq_.clear();
			}

			/// Number of elements on the stack.
			index_type
			size() const YY_NOEXCEPT {
				return index_type(seq_.size());
			}

			/// Iterator on top of the stack (going downwards).
			const_iterator
			begin() const YY_NOEXCEPT {
				return seq_.begin();
			}

			/// Bottom of the stack.
			const_iterator
			end() const YY_NOEXCEPT {
				return seq_.end();
			}

			/// Present a slice of the top of a stack.

			class slice {
			public:
				slice(const stack& stack, index_type range)
				: stack_(stack)
				, range_(range) {
				}
				const T&
				operator[](index_type i) const {
					return stack_[range_ - i];
				}

			private:
				const stack& stack_;
				index_type range_;
			};

		private:
#if YY_CPLUSPLUS < 201103L
			/// Non copyable.
			stack(const stack&);
			/// Non copyable.
			stack& operator=(const stack&);
#endif
			/// The wrapped container.
			S seq_;
		};


		/// Stack type.
		typedef stack<stack_symbol_type> stack_type;

		/// The stack.
		stack_type yystack_;

		/// Push a new state on the stack.
		/// \param m    a debug message to display
		///             if null, no trace is output.
		/// \param sym  the symbol
		/// \warning the contents of \a s.value is stolen.
		void yypush_(const char* m, YY_MOVE_REF(stack_symbol_type) sym);

		/// Push a new look ahead token on the state on the stack.
		/// \param m    a debug message to display
		///             if null, no trace is output.
		/// \param s    the state
		/// \param sym  the symbol (for its value and location).
		/// \warning the contents of \a sym.value is stolen.
		void yypush_(const char* m, state_type s, YY_MOVE_REF(symbol_type) sym);

		/// Pop \a n symbols from the stack.
		void yypop_(int n = 1);

		/// Constants.

		enum {
			yylast_ = 1611, ///< Last index in yytable_.
			yynnts_ = 21, ///< Number of nonterminal symbols.
			yyfinal_ = 116 ///< Termination state number.
		};


		// User arguments.
		genesyspp_driver& driver;

	};
	inline
	genesyspp_parser::symbol_kind_type
	genesyspp_parser::yytranslate_(int t) {
		// YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
		// TOKEN-NUM as returned by yylex.
		static
		const signed char
		translate_table[] = {
			0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			86, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
			5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
			15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
			25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
			35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
			45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
			55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
			65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
			75, 76, 77, 78, 79, 80, 81, 82, 83, 84,
			85, 87
		};
		// Last valid token kind.
		const int code_max = 341;

		if (t <= 0)
			return symbol_kind::S_YYEOF;
		else if (t <= code_max)
			return YY_CAST(symbol_kind_type, translate_table[t]);
		else
			return symbol_kind::S_YYUNDEF;
	}

	// basic_symbol.
	template <typename Base>
	genesyspp_parser::basic_symbol<Base>::basic_symbol(const basic_symbol& that)
	: Base(that)
	, value()
	, location(that.location) {
		switch (this->kind()) {
			case symbol_kind::S_NUMD: // NUMD
			case symbol_kind::S_NUMH: // NUMH
			case symbol_kind::S_CTEZERO: // CTEZERO
			case symbol_kind::S_oLE: // oLE
			case symbol_kind::S_oGE: // oGE
			case symbol_kind::S_oEQ: // oEQ
			case symbol_kind::S_oNE: // oNE
			case symbol_kind::S_oAND: // oAND
			case symbol_kind::S_oOR: // oOR
			case symbol_kind::S_oNOT: // oNOT
			case symbol_kind::S_fSIN: // fSIN
			case symbol_kind::S_fCOS: // fCOS
			case symbol_kind::S_fROUND: // fROUND
			case symbol_kind::S_fMOD: // fMOD
			case symbol_kind::S_fTRUNC: // fTRUNC
			case symbol_kind::S_fFRAC: // fFRAC
			case symbol_kind::S_fEXP: // fEXP
			case symbol_kind::S_fSQRT: // fSQRT
			case symbol_kind::S_fLOG: // fLOG
			case symbol_kind::S_fLN: // fLN
			case symbol_kind::S_fVAL: // fVAL
			case symbol_kind::S_fEVAL: // fEVAL
			case symbol_kind::S_fLENG: // fLENG
			case symbol_kind::S_fRND1: // fRND1
			case symbol_kind::S_fEXPO: // fEXPO
			case symbol_kind::S_fNORM: // fNORM
			case symbol_kind::S_fUNIF: // fUNIF
			case symbol_kind::S_fWEIB: // fWEIB
			case symbol_kind::S_fLOGN: // fLOGN
			case symbol_kind::S_fGAMM: // fGAMM
			case symbol_kind::S_fERLA: // fERLA
			case symbol_kind::S_fTRIA: // fTRIA
			case symbol_kind::S_fBETA: // fBETA
			case symbol_kind::S_fDISC: // fDISC
			case symbol_kind::S_fTNOW: // fTNOW
			case symbol_kind::S_fTFIN: // fTFIN
			case symbol_kind::S_fMAXREP: // fMAXREP
			case symbol_kind::S_fNUMREP: // fNUMREP
			case symbol_kind::S_fIDENT: // fIDENT
			case symbol_kind::S_cIF: // cIF
			case symbol_kind::S_cELSE: // cELSE
			case symbol_kind::S_cFOR: // cFOR
			case symbol_kind::S_cTO: // cTO
			case symbol_kind::S_cDO: // cDO
			case symbol_kind::S_ATRIB: // ATRIB
			case symbol_kind::S_CSTAT: // CSTAT
			case symbol_kind::S_fTAVG: // fTAVG
			case symbol_kind::S_ILLEGAL: // ILLEGAL
			case symbol_kind::S_RESOURCE: // RESOURCE
			case symbol_kind::S_fNR: // fNR
			case symbol_kind::S_fMR: // fMR
			case symbol_kind::S_fIRF: // fIRF
			case symbol_kind::S_fRESSEIZES: // fRESSEIZES
			case symbol_kind::S_fSTATE: // fSTATE
			case symbol_kind::S_fSETSUM: // fSETSUM
			case symbol_kind::S_fRESUTIL: // fRESUTIL
			case symbol_kind::S_QUEUE: // QUEUE
			case symbol_kind::S_fNQ: // fNQ
			case symbol_kind::S_fFIRSTINQ: // fFIRSTINQ
			case symbol_kind::S_fLASTINQ: // fLASTINQ
			case symbol_kind::S_fSAQUE: // fSAQUE
			case symbol_kind::S_fAQUE: // fAQUE
			case symbol_kind::S_fENTATRANK: // fENTATRANK
			case symbol_kind::S_SET: // SET
			case symbol_kind::S_fNUMSET: // fNUMSET
			case symbol_kind::S_VARI: // VARI
			case symbol_kind::S_FORM: // FORM
			case symbol_kind::S_fNUMGR: // fNUMGR
			case symbol_kind::S_fATRGR: // fATRGR
			case symbol_kind::S_input: // input
			case symbol_kind::S_expression: // expression
			case symbol_kind::S_numero: // numero
			case symbol_kind::S_aritmetica: // aritmetica
			case symbol_kind::S_relacional: // relacional
			case symbol_kind::S_comando: // comando
			case symbol_kind::S_comandoIF: // comandoIF
			case symbol_kind::S_comandoFOR: // comandoFOR
			case symbol_kind::S_function: // function
			case symbol_kind::S_kernelFunction: // kernelFunction
			case symbol_kind::S_trigonFunction: // trigonFunction
			case symbol_kind::S_mathFunction: // mathFunction
			case symbol_kind::S_probFunction: // probFunction
			case symbol_kind::S_userFunction: // userFunction
			case symbol_kind::S_listaparm: // listaparm
			case symbol_kind::S_atributo: // atributo
			case symbol_kind::S_variavel: // variavel
			case symbol_kind::S_formula: // formula
			case symbol_kind::S_atribuicao: // atribuicao
			case symbol_kind::S_pluginFunction: // pluginFunction
				value.copy< obj_t > (YY_MOVE(that.value));
				break;

			default:
				break;
		}

	}
	template <typename Base>
	genesyspp_parser::symbol_kind_type
	genesyspp_parser::basic_symbol<Base>::type_get() const YY_NOEXCEPT {
		return this->kind();
	}
	template <typename Base>
	bool
	genesyspp_parser::basic_symbol<Base>::empty() const YY_NOEXCEPT {
		return this->kind() == symbol_kind::S_YYEMPTY;
	}
	template <typename Base>
	void
	genesyspp_parser::basic_symbol<Base>::move(basic_symbol& s) {
		super_type::move(s);
		switch (this->kind()) {
			case symbol_kind::S_NUMD: // NUMD
			case symbol_kind::S_NUMH: // NUMH
			case symbol_kind::S_CTEZERO: // CTEZERO
			case symbol_kind::S_oLE: // oLE
			case symbol_kind::S_oGE: // oGE
			case symbol_kind::S_oEQ: // oEQ
			case symbol_kind::S_oNE: // oNE
			case symbol_kind::S_oAND: // oAND
			case symbol_kind::S_oOR: // oOR
			case symbol_kind::S_oNOT: // oNOT
			case symbol_kind::S_fSIN: // fSIN
			case symbol_kind::S_fCOS: // fCOS
			case symbol_kind::S_fROUND: // fROUND
			case symbol_kind::S_fMOD: // fMOD
			case symbol_kind::S_fTRUNC: // fTRUNC
			case symbol_kind::S_fFRAC: // fFRAC
			case symbol_kind::S_fEXP: // fEXP
			case symbol_kind::S_fSQRT: // fSQRT
			case symbol_kind::S_fLOG: // fLOG
			case symbol_kind::S_fLN: // fLN
			case symbol_kind::S_fVAL: // fVAL
			case symbol_kind::S_fEVAL: // fEVAL
			case symbol_kind::S_fLENG: // fLENG
			case symbol_kind::S_fRND1: // fRND1
			case symbol_kind::S_fEXPO: // fEXPO
			case symbol_kind::S_fNORM: // fNORM
			case symbol_kind::S_fUNIF: // fUNIF
			case symbol_kind::S_fWEIB: // fWEIB
			case symbol_kind::S_fLOGN: // fLOGN
			case symbol_kind::S_fGAMM: // fGAMM
			case symbol_kind::S_fERLA: // fERLA
			case symbol_kind::S_fTRIA: // fTRIA
			case symbol_kind::S_fBETA: // fBETA
			case symbol_kind::S_fDISC: // fDISC
			case symbol_kind::S_fTNOW: // fTNOW
			case symbol_kind::S_fTFIN: // fTFIN
			case symbol_kind::S_fMAXREP: // fMAXREP
			case symbol_kind::S_fNUMREP: // fNUMREP
			case symbol_kind::S_fIDENT: // fIDENT
			case symbol_kind::S_cIF: // cIF
			case symbol_kind::S_cELSE: // cELSE
			case symbol_kind::S_cFOR: // cFOR
			case symbol_kind::S_cTO: // cTO
			case symbol_kind::S_cDO: // cDO
			case symbol_kind::S_ATRIB: // ATRIB
			case symbol_kind::S_CSTAT: // CSTAT
			case symbol_kind::S_fTAVG: // fTAVG
			case symbol_kind::S_ILLEGAL: // ILLEGAL
			case symbol_kind::S_RESOURCE: // RESOURCE
			case symbol_kind::S_fNR: // fNR
			case symbol_kind::S_fMR: // fMR
			case symbol_kind::S_fIRF: // fIRF
			case symbol_kind::S_fRESSEIZES: // fRESSEIZES
			case symbol_kind::S_fSTATE: // fSTATE
			case symbol_kind::S_fSETSUM: // fSETSUM
			case symbol_kind::S_fRESUTIL: // fRESUTIL
			case symbol_kind::S_QUEUE: // QUEUE
			case symbol_kind::S_fNQ: // fNQ
			case symbol_kind::S_fFIRSTINQ: // fFIRSTINQ
			case symbol_kind::S_fLASTINQ: // fLASTINQ
			case symbol_kind::S_fSAQUE: // fSAQUE
			case symbol_kind::S_fAQUE: // fAQUE
			case symbol_kind::S_fENTATRANK: // fENTATRANK
			case symbol_kind::S_SET: // SET
			case symbol_kind::S_fNUMSET: // fNUMSET
			case symbol_kind::S_VARI: // VARI
			case symbol_kind::S_FORM: // FORM
			case symbol_kind::S_fNUMGR: // fNUMGR
			case symbol_kind::S_fATRGR: // fATRGR
			case symbol_kind::S_input: // input
			case symbol_kind::S_expression: // expression
			case symbol_kind::S_numero: // numero
			case symbol_kind::S_aritmetica: // aritmetica
			case symbol_kind::S_relacional: // relacional
			case symbol_kind::S_comando: // comando
			case symbol_kind::S_comandoIF: // comandoIF
			case symbol_kind::S_comandoFOR: // comandoFOR
			case symbol_kind::S_function: // function
			case symbol_kind::S_kernelFunction: // kernelFunction
			case symbol_kind::S_trigonFunction: // trigonFunction
			case symbol_kind::S_mathFunction: // mathFunction
			case symbol_kind::S_probFunction: // probFunction
			case symbol_kind::S_userFunction: // userFunction
			case symbol_kind::S_listaparm: // listaparm
			case symbol_kind::S_atributo: // atributo
			case symbol_kind::S_variavel: // variavel
			case symbol_kind::S_formula: // formula
			case symbol_kind::S_atribuicao: // atribuicao
			case symbol_kind::S_pluginFunction: // pluginFunction
				value.move< obj_t > (YY_MOVE(s.value));
				break;

			default:
				break;
		}

		location = YY_MOVE(s.location);
	}

	// by_kind.
	inline
	genesyspp_parser::by_kind::by_kind()
	: kind_(symbol_kind::S_YYEMPTY) {
	}

#if 201103L <= YY_CPLUSPLUS
	inline
	genesyspp_parser::by_kind::by_kind(by_kind&& that)
	: kind_(that.kind_) {
		that.clear();
	}
#endif
	inline
	genesyspp_parser::by_kind::by_kind(const by_kind& that)
	: kind_(that.kind_) {
	}
	inline
	genesyspp_parser::by_kind::by_kind(token_kind_type t)
	: kind_(yytranslate_(t)) {
	}
	inline
	void
	genesyspp_parser::by_kind::clear() YY_NOEXCEPT {
		kind_ = symbol_kind::S_YYEMPTY;
	}
	inline
	void
	genesyspp_parser::by_kind::move(by_kind& that) {
		kind_ = that.kind_;
		that.clear();
	}
	inline
	genesyspp_parser::symbol_kind_type
	genesyspp_parser::by_kind::kind() const YY_NOEXCEPT {
		return kind_;
	}
	inline
	genesyspp_parser::symbol_kind_type
	genesyspp_parser::by_kind::type_get() const YY_NOEXCEPT {
		return this->kind();
	}

} // yy
#line 3185 "../GenesysParser.h"




#endif // !YY_YY_GENESYSPARSER_H_INCLUDED
