/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQSDocument, SFUZipInflateInputStream, SFUCryptoKey, GQZArchive;

@interface GQPProcessor : NSObject {
	xmlTextReader *mReader;	// 4 = 0x4
	xmlParserInputBuffer *mParserInputBuffer;	// 8 = 0x8
	GQZArchive *mArchive;	// 12 = 0xc
	SFUCryptoKey *mCryptoKey;	// 16 = 0x10
	unsigned long long mTotalBytesToConsume;	// 20 = 0x14
	SFUZipInflateInputStream *mInputStream;	// 28 = 0x1c
	stack<std::tr1::shared_ptr<StateSpec>, std::deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec>>> > *mStateStack;	// 32 = 0x20
	stack<std::pair<const Action *, int>, std::deque<std::pair<const Action *, int>, std::allocator<std::pair<const Action *, int>>> > *mActionStack;	// 36 = 0x24
	GQSDocument *mDocumentState;	// 40 = 0x28
	QLPreviewRequestRef mOutputPreviewRequest;	// 44 = 0x2c
	CFBundleRef mBundle;	// 48 = 0x30
	CGSize mThumbnailSize;	// 52 = 0x34
	BOOL mWrongFormat;	// 60 = 0x3c
	unsigned char mIsProgressive;	// 61 = 0x3d
}
@property(assign) CFBundleRef bundle;	// G=0x34c192e5; S=0x34c19309; converted property
@property(assign) CGSize thumbnailSize;	// G=0x34c19455; S=0x34c1946d; converted property
@property(assign, getter=isWrongFormat) BOOL wrongFormat;	// G=0x34c19491; S=0x34c194a1; converted property
+ (xmlTextReader *)createXmlReaderWithZipArchive:(id)zipArchive indexFileName:(id)name cryptoKey:(id)key indexEntry:(id *)entry zipInputStream:(id *)stream;	// 0x34c190a1
+ (void)initialize;	// 0x34c185b1
- (id)initWithPath:(id)path indexFileName:(id)name previewRequest:(QLPreviewRequestRef)request;	// 0x34c185e5
- (id)initWithZipArchive:(id)zipArchive indexFileName:(id)name previewRequest:(QLPreviewRequestRef)request;	// 0x34c18add
- (id)initWithZipArchive:(id)zipArchive indexFileName:(id)name previewRequest:(QLPreviewRequestRef)request cryptoKey:(id)key;	// 0x34c18de9
- (id).cxx_construct;	// 0x34c194b1
- (stack<std::pair<const Action *, int>, std::deque<std::pair<const Action *, int>, std::allocator<std::pair<const Action *, int>>> > *)actionStack;	// 0x34c19435
- (id)archive;	// 0x34c192d5
// converted property getter: - (CFBundleRef)bundle;	// 0x34c192e5
- (void)dealloc;	// 0x34c1916d
- (id)documentState;	// 0x34c19445
- (BOOL)go;	// 0x34c19319
// converted property getter: - (BOOL)isWrongFormat;	// 0x34c19491
- (void)pushInitialState;	// 0x34c192d1
// converted property setter: - (void)setBundle:(CFBundleRef)bundle;	// 0x34c19309
- (void)setProgressiveMode:(unsigned char)mode;	// 0x34c19481
// converted property setter: - (void)setThumbnailSize:(CGSize)size;	// 0x34c1946d
// converted property setter: - (void)setWrongFormat:(BOOL)format;	// 0x34c194a1
- (stack<std::tr1::shared_ptr<StateSpec>, std::deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec>>> > *)stateStack;	// 0x34c19425
// converted property getter: - (CGSize)thumbnailSize;	// 0x34c19455
@end
