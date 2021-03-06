/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBJsonStreamParserState, SBJsonTokeniser, NSMutableArray;
@protocol SBJsonStreamParserDelegate;

@interface SBJsonStreamParser : XXUnknownSuperclass {
	BOOL supportMultipleDocuments;	// 4 = 0x4
	id<SBJsonStreamParserDelegate> delegate;	// 8 = 0x8
	SBJsonTokeniser *tokeniser;	// 12 = 0xc
	NSMutableArray *stateStack;	// 16 = 0x10
	SBJsonStreamParserState *state;	// 20 = 0x14
	unsigned maxDepth;	// 24 = 0x18
	NSString *error;	// 28 = 0x1c
}
@property(assign) id<SBJsonStreamParserDelegate> delegate;	// G=0x49088d; S=0x4908a1; @synthesize
@property(copy) NSString *error;	// G=0x490869; S=0x49087d; @synthesize
@property(assign) unsigned maxDepth;	// G=0x4908b9; S=0x4908cd; @synthesize
@property(assign, nonatomic) SBJsonStreamParserState *state;	// G=0x4908e5; S=0x4908f5; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *stateStack;	// G=0x490905; @synthesize
@property(assign) BOOL supportMultipleDocuments;	// G=0x490839; S=0x490851; @synthesize
- (id)init;	// 0x490051
- (void)dealloc;	// 0x490131
// declared property getter: - (id)delegate;	// 0x49088d
// declared property getter: - (id)error;	// 0x490869
- (void)handleArrayStart;	// 0x490399
- (void)handleObjectStart;	// 0x4902d9
// declared property getter: - (unsigned)maxDepth;	// 0x4908b9
- (void)maxDepthError;	// 0x490255
- (int)parse:(id)parse;	// 0x490459
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4908a1
// declared property setter: - (void)setError:(id)error;	// 0x49087d
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x4908cd
// declared property setter: - (void)setState:(id)state;	// 0x4908f5
// declared property setter: - (void)setSupportMultipleDocuments:(BOOL)documents;	// 0x490851
// declared property getter: - (id)state;	// 0x4908e5
// declared property getter: - (id)stateStack;	// 0x490905
// declared property getter: - (BOOL)supportMultipleDocuments;	// 0x490839
- (id)tokenName:(int)name;	// 0x4901bd
@end

