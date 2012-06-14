/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MessageBody.h"

@class MimePart;

@interface MimeBody : MessageBody {
	MimePart *_topLevelPart;	// 8 = 0x8
	unsigned _preferredTextEncoding;	// 12 = 0xc
	unsigned _preferredAlternative : 16;	// 16 = 0x10
	unsigned _numAlternatives : 16;	// 18 = 0x12
}
@property(assign) int preferredAlternative;	// G=0x35e6b081; S=0x35e6b1d9; converted property
@property(assign) unsigned long preferredTextEncoding;	// G=0x35e6ad69; S=0x35e6ad79; converted property
@property(retain) MimePart *topLevelPart;	// G=0x35e6ad59; S=0x35e6b7a1; converted property
+ (id)copyNewMimeBoundary;	// 0x35e6add9
+ (id)versionString;	// 0x35e6ae39
- (id)init;	// 0x35e6ad89
- (id)attachments;	// 0x35e6b5c9
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x35e6b36d
- (void)dealloc;	// 0x35e6b7f9
- (BOOL)isHTML;	// 0x35e6b531
- (BOOL)isRich;	// 0x35e6b48d
- (id)mimeSubtype;	// 0x35e6b751
- (id)mimeType;	// 0x35e6b779
- (int)numberOfAlternatives;	// 0x35e6b285
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x35e6b605
- (id)partWithNumber:(id)number;	// 0x35e6b655
// converted property getter: - (int)preferredAlternative;	// 0x35e6b081
- (id)preferredBodyPart;	// 0x35e6afbd
// converted property getter: - (unsigned long)preferredTextEncoding;	// 0x35e6ad69
// converted property setter: - (void)setPreferredAlternative:(int)alternative;	// 0x35e6b1d9
// converted property setter: - (void)setPreferredTextEncoding:(unsigned long)encoding;	// 0x35e6ad79
// converted property setter: - (void)setTopLevelPart:(id)part;	// 0x35e6b7a1
- (id)textHtmlPart;	// 0x35e6af01
// converted property getter: - (id)topLevelPart;	// 0x35e6ad59
- (unsigned)totalTextSize;	// 0x35e6b34d
@end
