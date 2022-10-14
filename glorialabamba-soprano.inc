\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\key d \major

		R2.*8  |
		d' 4. d'  |
%% 10
		e' 4 d' 8 e' 4 fis' 8 ~  |
		fis' 4 d' 8 ~ d' 4. ~  |
		d' 4. r8. d'  |
		g' 2.  |
		fis' 4 e' 8 ~ e' 4 fis' 8 ~  |
%% 15
		fis' 4 a' 8 ~ a' 4. ~  |
		a' 4. r4 d' 8  |
		d' 4. d' 4 d' 8  |
		e' 4 e' 8 d' 4 cis' 8  |
		d' 2.  |
%% 20
		r4. r4 d' 8  |
		d' 4. d' 4 d' 8  |
		e' 4 e' 8 d' 4 cis' 8  |
		d' 2.  |
		r4. d' 4 d' 8  |
%% 25
		g' 4. ~ g' 4 g' 8 ~  |
		g' 4 g' 8 g' 4 fis' 8  |
		fis' 4 e' 8 ~ e' 4.  |
		r4. e' 4 e' 8  |
		fis' 4. ~ fis' 4 fis' 8  |
%% 30
		fis' 4 fis' 8 fis' 4 e' 8  |
		e' 4 d' 8 ~ d' 4.  |
		r4 d' 8 d' 4 d' 8  |
		g' 2.  |
		g' 4. fis'  |
%% 35
		e' 2.  |
		d' 4 cis' 8 d' 4 e' 8  |
		fis' 2.  |
		fis' 2.  |
		R2.  |
%% 40
		r4 d' 8 d' 4 d' 8  |
		g' 2.  |
		g' 4. fis'  |
		e' 2.  |
		d' 4. cis'  |
%% 45
		d' 2.  |
		R2.*3  |
		d' 4. d'  |
%% 50
		e' 4 d' 8 e' 4 fis' 8 ~  |
		fis' 4 d' 8 ~ d' 4. ~  |
		d' 4. r8 r16 d' 8.  |
		g' 2.  |
		fis' 4 e' 8 ~ e' 4 fis' 8 ~  |
%% 55
		fis' 4 a' 8 ~ a' 4. ~  |
		a' 4. r8 r d'  |
		d' 4. d' 4 d' 8  |
		e' 4 e' 8 d' 4 cis' 8  |
		d' 2.  |
%% 60
		r4. r8 r d'  |
		d' 4. d' 4 d' 8  |
		e' 4 e' 8 d' 4 cis' 8  |
		d' 2.  |
		r8 r d' d' 4 d' 8  |
%% 65
		g' 4. ~ g' 4 g' 8  |
		g' 4 g' 8 fis' 4 fis' 8 ( ~  |
		fis' 4 e' 8 ~ e' 4. )  |
		r4 e' 8 e' 4 e' 8  |
		fis' 4 fis' 8 fis' 4 fis' 8  |
%% 70
		fis' 4 fis' 8 e' 4 e' 8 ~  |
		e' 4 d' 8 ~ d' 4.  |
		r4. d' 4 d' 8  |
		g' 2.  |
		g' 4 g' 8 fis' 4.  |
%% 75
		e' 2. ~  |
		e' 4. d'  |
		fis' 2. ~  |
		fis' 2.  |
		R2.  |
%% 80
		r8 r d' d' 4 d' 8  |
		g' 2.  |
		g' 4. fis'  |
		e' 4. e'  |
		d' 4. cis'  |
%% 85
		d' 2.  |
		R2.*3  |
		d' 4. d'  |
%% 90
		e' 4 d' 8 e' 4 fis' 8 ~  |
		fis' 4 d' 8 ~ d' 4. ~  |
		d' 4. r8 r16 d' 8.  |
		g' 2.  |
		fis' 4 e' 8 ~ e' 4 fis' 8 ~  |
%% 95
		fis' 4 a' 8 ~ a' 4. ~  |
		a' 4. r8 r d'  |
		d' 4. d' 4 d' 8  |
		e' 4 e' 8 d' 4 cis' 8  |
		d' 2.  |
%% 100
		r4. r8 r d'  |
		d' 4. d' ( ~  |
		d' 2.  |
		cis' 4. -\staccato ) r4 cis' 8  |
		e' 4 e' 8 d' 4 cis' 8  |
%% 105
		d' 2. (  |
		g' 2.  |
		fis' 2. ~  |
		fis' 2. )  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-soprano" {
		Glo -- "ria a" Dios en el cie -- lo __
		y paz en la tie -- rra __
		al hom -- bre que a -- ma el Se -- ñor,
		al hom -- bre que a -- ma el Se -- ñor.

		"Te a" -- la -- ba -- mos, te ben -- de -- ci -- mos,
		"te a" -- do -- ra -- mos, te glo -- ri -- fi -- ca -- mos,
		te da -- mos gra -- cias, Se -- ñor,
		por "tu in" -- men -- sa glo -- ria,
		te da -- mos gra -- cias, Se -- ñor,
		por "tu a" -- mor.

		Glo -- "ria a" Dios en el cie -- lo __
		y paz en la tie -- rra __
		al hom -- bre que a -- ma el Se -- ñor,
		al hom -- bre que a -- ma el Se -- ñor.

		Se -- ñor Je -- sús, cor -- de -- ro de Dios __
		Hi -- jo del Pa -- dre, ten pie -- dad de no -- so -- tros
		só -- lo tú e -- res el Sal -- va -- dor,
		con el Es -- pí -- ri -- tu San -- "to en" "la u" -- ni -- dad.

		Glo -- "ria a" Dios en el cie -- lo __
		y paz en la tie -- rra __
		al hom -- bre que a -- ma el Se -- ñor,
		al hom -- bre __
		que a -- ma el Se -- ñor. __
	}
>>
