/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSAttributedString, NSArray;

@interface IMAttributedStringParserContext : NSObject {
	NSAttributedString *_inString;	// 4 = 0x4
}
@property(readonly, assign) NSAttributedString *inString;	// G=0x36ea2985; @synthesize=_inString
@property(readonly, assign) NSString *name;	// G=0x36eb7709; 
@property(readonly, assign) NSArray *resultsForLogging;	// G=0x36eb7715; 
@property(readonly, assign) BOOL shouldPreprocess;	// G=0x36ea2999; 
- (id)initWithAttributedString:(id)attributedString;	// 0x36ea28cd
- (void)dealloc;	// 0x36ea2d71
// declared property getter: - (id)inString;	// 0x36ea2985
// declared property getter: - (id)name;	// 0x36eb7709
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range;	// 0x36eb771d
- (id)parser:(id)parser preprocessedAttributesForAttributes:(id)attributes range:(NSRange)range;	// 0x36eb7721
- (void)parserDidEnd:(id)parser;	// 0x36ea2c9d
- (void)parserDidStart:(id)parser;	// 0x36eb7719
// declared property getter: - (id)resultsForLogging;	// 0x36eb7715
// declared property getter: - (BOOL)shouldPreprocess;	// 0x36ea2999
@end

