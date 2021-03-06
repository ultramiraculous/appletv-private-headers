/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, RTFReaderState, RTFCPZArchive, RTF_CMArchiveManager, NSMapTable, NSMutableString, RTFHTMLWriter, NSURL, RTFNSColor, NSData;

__attribute__((visibility("hidden")))
@interface RTFReader : NSObject {
	RTFReaderState *_readerState;	// 4 = 0x4
	RTFHTMLWriter *_htmlWriter;	// 8 = 0x8
	RTF_CMArchiveManager *_archiver;	// 12 = 0xc
	RTFCPZArchive *_zipArchive;	// 16 = 0x10
	NSURL *_packageURL;	// 20 = 0x14
	NSMutableString *_currentString;	// 24 = 0x18
	NSMutableString *_topString;	// 28 = 0x1c
	NSData *_rtfData;	// 32 = 0x20
	NSMutableDictionary *_fontTable;	// 36 = 0x24
	union {
		unsigned char thin[128];
		unsigned short fat[128];
	} _textBuffer;	// 40 = 0x28
	unsigned _textBufferIndex;	// 296 = 0x128
	int _rtfVersion;	// 300 = 0x12c
	int _cocoaVersion;	// 304 = 0x130
	int _cocoaSubVersion;	// 308 = 0x134
	int _readOnly;	// 312 = 0x138
	RTFNSColor *_documentBackgroundColor;	// 316 = 0x13c
	NSMutableDictionary *_documentInfoDictionary;	// 320 = 0x140
	NSMapTable *_cachedRTFFontTable;	// 324 = 0x144
	float _hyphenationFactor;	// 328 = 0x148
	float _defaultTabInterval;	// 332 = 0x14c
	NSRTFPriv _private;	// 336 = 0x150
	BOOL _textBufferContentsIsFat;	// 2516 = 0x9d4
	BOOL _explicitCharSetEncountered;	// 2517 = 0x9d5
	BOOL _isRTLDocument;	// 2518 = 0x9d6
	int _readLimit;	// 2520 = 0x9d8
	int _thumbnailLimit;	// 2524 = 0x9dc
	BOOL _limitReached;	// 2528 = 0x9e0
	BOOL _currentRowIsLast;	// 2529 = 0x9e1
}
@property(assign) int cocoaSubVersion;	// G=0x32a24c91; S=0x32a24cd9; converted property
@property(assign) int cocoaVersion;	// G=0x32a24c79; S=0x32a24ca1; converted property
@property(assign) float defaultTabInterval;	// G=0x32a24dbd; S=0x32a24dad; converted property
- (id)initWithData:(id)data archiver:(id)archiver;	// 0x32a2485d
- (id)initWithPackageURL:(id)packageURL archiver:(id)archiver;	// 0x32a24a8d
- (id)initWithZippedRTFD:(id)zippedRTFD archiver:(id)archiver;	// 0x32a2492d
- (id)_initWithArchiver:(id)archiver;	// 0x32a217f1
- (void)_insertAttachmentNamed:(id)named;	// 0x32a24fb9
// converted property getter: - (int)cocoaSubVersion;	// 0x32a24c91
// converted property getter: - (int)cocoaVersion;	// 0x32a24c79
- (void)dealloc;	// 0x32a24ba1
// converted property getter: - (float)defaultTabInterval;	// 0x32a24dbd
- (float)floatCocoaVersion;	// 0x32a24ce9
- (void)read;	// 0x32a24dcd
- (void)setBackgroundColor:(id)color;	// 0x32a24d69
// converted property setter: - (void)setCocoaSubVersion:(int)version;	// 0x32a24cd9
// converted property setter: - (void)setCocoaVersion:(int)version;	// 0x32a24ca1
// converted property setter: - (void)setDefaultTabInterval:(float)interval;	// 0x32a24dad
- (void)setHyphenationFactor:(float)factor;	// 0x32a24d59
- (void)setReadOnly:(int)only;	// 0x32a24d49
@end

