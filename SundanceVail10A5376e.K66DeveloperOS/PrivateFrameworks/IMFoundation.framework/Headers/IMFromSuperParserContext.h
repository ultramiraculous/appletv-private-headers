/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMAttributedStringParserContext.h"
#import "IMFoundation-Structs.h"

@class NSMutableArray, NSArray;

@interface IMFromSuperParserContext : IMAttributedStringParserContext {
	NSMutableArray *_inlinedFileTransferGUIDs;	// 8 = 0x8
	NSMutableArray *_standaloneFileTransferGUIDs;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *inlinedFileTransferGUIDs;	// G=0x36ea472d; @synthesize=_inlinedFileTransferGUIDs
@property(readonly, assign, nonatomic) NSArray *standaloneFileTransferGUIDs;	// G=0x36ea473d; @synthesize=_standaloneFileTransferGUIDs
- (id)initWithAttributedString:(id)attributedString;	// 0x36ea2835
- (void)dealloc;	// 0x36ea2d0d
// declared property getter: - (id)inlinedFileTransferGUIDs;	// 0x36ea472d
- (id)name;	// 0x36eb7725
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range;	// 0x36ea2b05
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range characters:(id)characters;	// 0x36eb7779
- (void)parser:(id)parser foundAttributes:(id)attributes inRange:(NSRange)range fileTransferGUID:(id)guid filename:(id)filename bookmark:(id)bookmark width:(id)width height:(id)height;	// 0x36ea49bd
- (void)parserDidStart:(id)parser;	// 0x36ea299d
- (void)parserDidStart:(id)parser bodyAttributes:(id)attributes;	// 0x36eb7775
- (id)resultsForLogging;	// 0x36eb7731
// declared property getter: - (id)standaloneFileTransferGUIDs;	// 0x36ea473d
@end
