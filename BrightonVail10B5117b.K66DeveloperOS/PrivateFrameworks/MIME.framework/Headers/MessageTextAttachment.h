/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, MessageFileWrapper;

@interface MessageTextAttachment : NSObject {
	NSMutableDictionary *_cache;	// 4 = 0x4
}
@property(retain, nonatomic) MessageFileWrapper *fileWrapper;	// G=0x346084a1; S=0x346084bd; 
@property(retain) id mimePart;	// G=0x34608b4d; S=0x34608b69; converted property
+ (unsigned)precedenceLevel;	// 0x34608791
- (id)init;	// 0x346081e1
- (id)initWithWrapper:(id)wrapper;	// 0x34608245
- (unsigned)approximateSize;	// 0x346084d9
- (id)cachedValueForKey:(id)key;	// 0x3460837d
- (void)dealloc;	// 0x346082c9
- (id)description;	// 0x34608315
- (void)download;	// 0x346086c1
// declared property getter: - (id)fileWrapper;	// 0x346084a1
- (id)fileWrapperForcingDownload:(BOOL)download;	// 0x34608741
- (BOOL)hasBeenDownloaded;	// 0x34608699
- (void)inlineDisplayData:(id *)data mimeType:(id *)type;	// 0x346086ed
- (BOOL)isPlaceholder;	// 0x346086c5
// converted property getter: - (id)mimePart;	// 0x34608b4d
- (BOOL)needsRedownload;	// 0x346086bd
- (id)persistentUniqueIdentifier;	// 0x3460878d
- (void)setCachedValue:(id)value forKey:(id)key;	// 0x346083f1
// declared property setter: - (void)setFileWrapper:(id)wrapper;	// 0x346084bd
// converted property setter: - (void)setMimePart:(id)part;	// 0x34608b69
- (BOOL)shouldDownloadAttachmentOnDisplay;	// 0x34608b85
- (id)textEncodingGuess;	// 0x34608b89
- (id)textEncodingNameForData:(id)data mimeType:(id)type;	// 0x34608b8d
@end
