/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, SBJsonStreamParserState, SBJsonTokeniser;
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
@property(assign) id<SBJsonStreamParserDelegate> delegate;	// G=0x518395; S=0x5183a9; @synthesize
@property(copy) NSString *error;	// G=0x518371; S=0x518385; @synthesize
@property(assign) unsigned maxDepth;	// G=0x5183c1; S=0x5183d5; @synthesize
@property(assign, nonatomic) SBJsonStreamParserState *state;	// G=0x5183ed; S=0x5183fd; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *stateStack;	// G=0x51840d; @synthesize
@property(assign) BOOL supportMultipleDocuments;	// G=0x518341; S=0x518359; @synthesize
- (id)init;	// 0x517b59
- (void)dealloc;	// 0x517c39
// declared property getter: - (id)delegate;	// 0x518395
// declared property getter: - (id)error;	// 0x518371
- (void)handleArrayStart;	// 0x517ea1
- (void)handleObjectStart;	// 0x517de1
// declared property getter: - (unsigned)maxDepth;	// 0x5183c1
- (void)maxDepthError;	// 0x517d5d
- (int)parse:(id)parse;	// 0x517f61
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x5183a9
// declared property setter: - (void)setError:(id)error;	// 0x518385
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x5183d5
// declared property setter: - (void)setState:(id)state;	// 0x5183fd
// declared property setter: - (void)setSupportMultipleDocuments:(BOOL)documents;	// 0x518359
// declared property getter: - (id)state;	// 0x5183ed
// declared property getter: - (id)stateStack;	// 0x51840d
// declared property getter: - (BOOL)supportMultipleDocuments;	// 0x518341
- (id)tokenName:(int)name;	// 0x517cc5
@end
