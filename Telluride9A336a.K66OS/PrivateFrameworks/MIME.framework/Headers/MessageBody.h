/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class Message;

@interface MessageBody : NSObject {
	Message *_message;	// 4 = 0x4
}
@property(retain) Message *message;	// G=0x350875a5; S=0x3508763d; converted property
- (id)attachments;	// 0x35087701
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x350875dd
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x35087599
- (void)dealloc;	// 0x35087725
- (id)htmlContent;	// 0x35087625
- (id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x35087601
- (BOOL)isHTML;	// 0x3508759d
- (BOOL)isRich;	// 0x350875a1
// converted property getter: - (id)message;	// 0x350875a5
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x350875b5
- (id)rawData;	// 0x350875bd
// converted property setter: - (void)setMessage:(id)message;	// 0x3508763d
- (id)textHtmlPart;	// 0x350875b9
@end

