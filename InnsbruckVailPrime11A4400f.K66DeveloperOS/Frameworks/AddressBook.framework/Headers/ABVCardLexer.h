/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import </libobjc.A.h>

@class NSArray, NSMutableData;

@interface ABVCardLexer : NSObject {
	NSMutableData *_data;	// 4 = 0x4
	char *_bytes;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	unsigned _peakedPoint;	// 16 = 0x10
	unsigned _cursor;	// 20 = 0x14
	BOOL _unicode;	// 24 = 0x18
	int _errorCount;	// 28 = 0x1c
	NSArray *_activeTokenSets;	// 32 = 0x20
}
@property(readonly, assign) unsigned cursor;	// G=0x2c9d3489; converted property
@property(readonly, assign) int errorCount;	// G=0x2c9d3499; converted property
- (id)initWithData:(id)data;	// 0x2c9d2ff1
- (BOOL)_advancePastLineFoldingSequenceIfNeeded;	// 0x2c9d4461
- (void)_applyNextStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim intoString:(id)string;	// 0x2c9d4545
- (BOOL)advancePastEOL;	// 0x2c9d52f9
- (BOOL)advancePastEOLSingle;	// 0x2c9d51f5
- (BOOL)advancePastEOLUnicode;	// 0x2c9d50b9
- (BOOL)advanceToEOL;	// 0x2c9d5085
- (BOOL)advanceToEOLSingle;	// 0x2c9d5025
- (BOOL)advanceToEOLUnicode;	// 0x2c9d4fbd
- (void)advanceToPeakPoint;	// 0x2c9d4ce9
- (int)advanceToSingleByteString;	// 0x2c9d4e31
- (int)advanceToString;	// 0x2c9d4f39
- (BOOL)advanceToToken:(int)token throughTypes:(int)types;	// 0x2c9d4f69
- (int)advanceToUnicodeString;	// 0x2c9d4d09
- (BOOL)advancedPastToken:(int)token;	// 0x2c9d3c19
- (BOOL)atEOF;	// 0x2c9d532d
// converted property getter: - (unsigned)cursor;	// 0x2c9d3489
- (void)dealloc;	// 0x2c9d3411
// converted property getter: - (int)errorCount;	// 0x2c9d3499
- (void)finalize;	// 0x2c9d345d
- (id)nextArraySeperatedByToken:(int)token stoppingAt:(int)at inEncoding:(unsigned)encoding;	// 0x2c9d47e5
- (id)nextBase64Data;	// 0x2c9d4bd5
- (id)nextBase64Line:(BOOL *)line;	// 0x2c9d4ba5
- (id)nextEscapedCharacter;	// 0x2c9d3b41
- (id)nextQuotedPrintableData;	// 0x2c9d39d5
- (id)nextSingleByteBase64Line:(BOOL *)line;	// 0x2c9d4a69
- (id)nextSingleByteStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim;	// 0x2c9d3ca5
- (id)nextStringInEncoding:(unsigned)encoding quotedPrintable:(BOOL)printable stopTokens:(int)tokens trim:(BOOL)trim;	// 0x2c9d45f5
- (int)nextTokenPeak:(BOOL)peak;	// 0x2c9d39a5
- (int)nextTokenPeakSingle:(BOOL)single length:(int)length;	// 0x2c9d3541
- (int)nextTokenPeakUnicode:(BOOL)unicode length:(int)length;	// 0x2c9d3759
- (id)nextUnicodeBase64Line:(BOOL *)line;	// 0x2c9d490d
- (id)nextUnicodeStringStopTokens:(int)tokens quotedPrintable:(BOOL)printable trim:(BOOL)trim;	// 0x2c9d40b1
- (int)tokenAtCursor;	// 0x2c9d46b1
- (id)tokenName:(int)name;	// 0x2c9d2ec9
- (id)tokenSetForLength:(int)length;	// 0x2c9d34a9
@end
