/*
	Syriac/Assyrian C & C++ translated keywords by Sahda Yonan
	This is for all the Assyrian/Syriac IT and software specialists.
	Hopefully, you guys will add to this list wa-nekhsha (alokhon!

	Please keep your language alive and keep it alive by learning your alphabet
	Our language didn't survive to modern times only for it to die...

	ܣܘܪܝܬ ܬܘܪܓܡܐ ܒܓ ܘܓ++ ܡܢ ܣܗܕܐ ܝܘܢܢ
	ܗܢܘܢ ܩܐ ܟܠܐ ܐܫܘܪܝܐ ܘܣܘܪܝܐ ܒܦܠܚܢܐ ܚܫܘܒ݂ܐ
	ܣܒܪܝܠܐ ܟܠܘܟ݂ܘܢ ܟܒܪܝܬܠܐ ܬܘܪܓܡܝ

	ܡܠܘܦܘܢ ܠܝܫܢܘܟ݂ܘܢ ܘܐܬܘܬܐ
	ܠܝܫܢܢ ܠܐ ܚܝܐ ܠܡܘܬܐ

ܦܘܫܩܐ - instruction, solution - for program - from root P-SH-Q meaning to simplify
*/

// Version 1.2

#ifndef __SYRIACDEF__
	#define __SYRIACDEF__

//#define ܐܣܪ		include		// "aser" - to tie together, join		// Doesn't work... Someday...

#define ܪܝܫܐ		main		// "reesha" - head, top, leader

// Data types
#define ܡܢܝܐ		int		// "menya" - a number, integer - usually 32-bit
#define ܒܨܪܐ		short		// "beSSra" - small portion (synonym of pesta but for integers) - usually 16-bit integer
#define	ܪܒܡܢܝܐ		long		// "rab menya" - greater number, integer - long is 64-bit integer

#define ܦܣܬܐ		float		// "pesta" - portion, lot
#define	ܪܒܦܣܬܐ		double		// "rab-pesta" - greater portion, lot (double means double precision which is essentially a bigger float)

#define ܡܠܬܐ		string		// "meltha" - word, noun
#define ܐܬܘܬܐ		char		// "atwata" - letter, character

//#define ܫܒܝܠܐ		ptr		// "sheweela/sheveela" - path, road, trace

#define ܟܠܟܠܬܐ		bool		// "kalkaltha" - switch, lever; from Akkadian "kalkaltu/kakkaltu"
#define ܫܪܪ		true		// "sharer" - to be firm, truthful
#define ܫܩܪ		false		// "shaqer" - to be deceitful, to deceive

#define ܟܘܬܪܐ		const		// "kootara" - remaining, staying, awaiting
#define ܟܦܪ		signed		// "kafer" - to deny, negate

#define ܣܦܩܐ		nullptr		// "sepqa" - emptied, missing
#define ܓܢܝܙܐ		void		// "geneeza" - concealed, hidden (void pointers are just typeless data, void functions just run code so I'm pertaining this to void pointers)

#define ܓܘܝܐ		static		// "gawaya" - internal
#define ܒܪܝܐ		extern		// "barraya" - external, exterior


// Composite Data types
#define ܡܢܝܬܐ		enum		// "menayta" - numbering, counting
#define ܐܡܘܡܐ		class		// "amoma/amooma" - mould, shaping device
#define ܟܢܫܐ		struct		// "kensha" - collection, gathering, assembly, congregation
#define	ܝܬܐ		this		// "yatha" - the self, soul
#define ܚܩܠܐ		namespace	// "khaqla/HHaqla" - farm (the idea is that a farm is a plot of land, a namespace is essentially a plot of code)
#define ܕܡܘܬܐ		template	// "dmutha" - likeness, model, pattern
#define ܠܘܚܐ		array		// "luHa / lukha" - table
#define ܚܕܝܘܬܐ		union		// "Khdayuta/HHdayuta" - union, joining together, uniting


// Control statements
#define ܐܢ		if		// "en" - if
#define ܐܠܐ		else		// "ela" - else

#define ܡܬܠܐ		switch		// "mathla" - comparison
#define ܕܡܐ		case		// "dma" - to copy, look like
#define ܓܕܫܬܐ		default		// "gedshta" - contingency, chance, event, fortune

#define ܥܕ		while		// "(ad" - while
#define ܐܙܠܐ		do		// "zeh" - to do, to go, to be off

#define ܩܐ		for		// "qa" - for
#define ܟܠܝ		break		// "kaley" - stop, discontinue;
#define ܥܒܪ		continue	// "(aber" - to pass, to skip over

#define ܫܕܪ		goto		// "shader" - to send, deliver

// Miscellaneous
#define ܡܕܪ		return		// "mader" - to return, resend
//#define ܬܚܡ		#define		// "tuhhama/tukhama" - limiting, defining
#define ܟܝܠܐ		sizeof		// "kayla" - measuring, size, amount, quantity - from the root "k-w-l" relating to measuring

#define	ܝܗܒ		new		// "yaheb" - to give, allow, put (new or malloc essentially just gives available memory)
#define ܠܚܝ		delete		// "lakhey / laHHey" - to delete, destroy, wipe out

#define ܚܫܚܬܐ		using		// "khshakhta" - use, utility, employment, need, necessity, want, usefulness
#define ܚܫܚܐ		typedef		// "khshakha" - use, utility, employment, need, necessity, want, usefulness (redefinition)
#define ܚܠܦ		inline		// "khlaf/HHlaf" - to change, exchange (inline functions are pretty much like #defines but for functions that are not macros)
#define ܬܪܨ		explicit	// "tareSS" - to straighten, to correct, to stand, to direct - the purpose of using this root is that the "explicit" keyword forces you to do explicit (direct) conversions..
#define ܦ݂ܘܪܬܪܢ		fortran		// "fortran" direct transliteration for inline fortran code.

// These are subject to change...
#define ܫܘܢܝܐ		dynamic_cast	// "shunaya" - transitioning
#define ܫܢܝܬܐ		static_cast	// "shanayta" - transference
#define ܟܠ_ܫܢܝܬܐ	reinterpret_cast // "kul shanayta" - total transference - reinterpret_cast typecasts between types unrestrictedly, so kulleh :)
#define ܫܢܝ_ܟܘܬܪܐ	const_cast	// "shaney kutara" - lazy direct translation of "changing constant", will very likely change in the future


// Class storage classes and various
#define ܛܫܝ		private		// "TTashey" - to hide, conceal
#define ܓܠܝܐ		public		// "gelya" - uncovered, revealed
#define ܩܪܪ		protected	// "qarer" - to be cold, to freeze
#define ܪܡܙܐ		operator	// "remza" - hint, sign, mark, symbol
#define ܣܡܟܐ		friend		// "samka" - supporter, upholder, room the root S-M-K related to supporting.
#define ܨܢܥ		virtual		// "SSan'e" - verb - to act craftly, with guile, to contrive cleverly

// parasha ... => one ...nth - for fractions, from Akkadian parasu ... meaning one ...nth

#define ܓܘܢܐ		typeid		// "gawna" - type, kind, species

#define ܒܚܪ		try		// "baHHer / bakher" - to trial, to test
#define ܒܨܪ		catch		// "baSSer" - to narrow
#define ܪܫܡܐ		throw		// "rshama" - indicating, foreshadowing
#define ٦١ܐܬܘܬܐ		char16_t	//
#define ٢٣ܐܬܘܬܐ		char32_t

#define ٠		0		// leeta
#define ١		1		// kh(d)a
#define ٢		2		// treyn
#define ٣		3		// tlatha
#define ٤		4		// arb'a
#define ٥		5		// HHamsha
#define ٦		6		// ishta
#define ٧		7		// shova
#define ٨		8		// tmenya
#define ٩		9		// itsha

/*
Keywords remaining for translation! -> refer to http://en.cppreference.com/w/cpp/keyword

alignof
alignas
asm
auto
compl
constexpr
decltype
export
import
module
mutable
noexcept
nullptr
NULL
register
requires
static_assert
synchronized
thread_local
typename
volatile
wchar_t
restrict
*/

#endif
