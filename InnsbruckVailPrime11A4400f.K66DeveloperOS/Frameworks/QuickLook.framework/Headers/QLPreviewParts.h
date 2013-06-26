/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import </libobjc.A.h>

@class NSURL, NSString, NSSet, NSURLRequest, NSURLResponse, NSURLConnection, NSData, NSError, NSMutableSet, NSMutableDictionary, NSThread;

__attribute__((visibility("hidden")))
@interface QLPreviewParts : NSObject {
	NSURL *_url;	// 4 = 0x4
	NSData *_data;	// 8 = 0x8
	NSString *_fileName;	// 12 = 0xc
	NSString *_uti;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	BOOL _progressive;	// 24 = 0x18
	void *_convertFunction;	// 28 = 0x1c
	NSURLConnection *_connection;	// 32 = 0x20
	id _delegate;	// 36 = 0x24
	int _pageCount;	// 40 = 0x28
	float _pageWidth;	// 44 = 0x2c
	float _pageHeight;	// 48 = 0x30
	NSURL *previewURL;	// 52 = 0x34
	NSURLResponse *previewResponse;	// 56 = 0x38
	NSMutableSet *registeredURLs;	// 60 = 0x3c
	NSMutableSet *outstandingURLs;	// 64 = 0x40
	NSMutableDictionary *encodingsForURLs;	// 68 = 0x44
	NSThread *delegateCallbackThread;	// 72 = 0x48
	NSError *mainError;	// 76 = 0x4c
	BOOL computed;	// 80 = 0x50
	BOOL cancelled;	// 81 = 0x51
	const void *representedObject;	// 84 = 0x54
	XXStruct_QrC3XA representedObjectCallbacks;	// 88 = 0x58
	long representedObjectProtection;	// 108 = 0x6c
	BOOL htmlErrorDisabled;	// 112 = 0x70
}
@property(readonly, assign, nonatomic) NSSet *attachmentURLs;	// G=0x2f2f0079; 
@property(readonly, assign, getter=isCancelled) BOOL cancelled;	// G=0x2f2ef081; 
@property(readonly, assign, getter=isComputed) BOOL computed;	// G=0x2f2ef0b1; 
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x2f2f0279; S=0x2f2f0289; @synthesize=_connection
@property(retain, nonatomic) NSData *data;	// G=0x2f2f01d9; S=0x2f2f01e9; @synthesize=_data
@property(assign, nonatomic) id delegate;	// G=0x2f2f0299; S=0x2f2edc6d; @synthesize=_delegate
@property(retain, nonatomic) NSString *fileName;	// G=0x2f2f01f9; S=0x2f2f0209; @synthesize=_fileName
@property(assign) BOOL htmlErrorDisabled;	// G=0x2f2f02e5; S=0x2f2f02fd; @synthesize
@property(readonly, assign) int pageCount;	// G=0x2f2f02a9; @synthesize=_pageCount
@property(readonly, assign) float pageHeight;	// G=0x2f2f02d1; @synthesize=_pageHeight
@property(readonly, assign) float pageWidth;	// G=0x2f2f02bd; @synthesize=_pageWidth
@property(retain, nonatomic) NSString *password;	// G=0x2f2f0239; S=0x2f2f0249; @synthesize=_password
@property(readonly, assign, nonatomic) NSURLRequest *previewRequest;	// G=0x2f2eff1d; 
@property(readonly, assign, nonatomic) NSURLResponse *previewResponse;	// G=0x2f2eff91; 
@property(readonly, assign, nonatomic) NSURL *previewURL;	// G=0x2f2f0315; @synthesize
@property(assign, nonatomic) BOOL progressive;	// G=0x2f2f0259; S=0x2f2f0269; @synthesize=_progressive
@property(retain, nonatomic) NSURL *url;	// G=0x2f2f01b9; S=0x2f2f01c9; @synthesize=_url
@property(retain, nonatomic) NSString *uti;	// G=0x2f2f0219; S=0x2f2f0229; @synthesize=_uti
+ (BOOL)isSafeRequest:(id)request;	// 0x2f2ee059
+ (BOOL)isSafeURL:(id)url;	// 0x2f2ee019
+ (void)registerPreview:(id)preview;	// 0x2f2edd59
+ (id)relativeStringForSafeURL:(id)safeURL;	// 0x2f2ee089
+ (id)safeURLScheme;	// 0x2f2ee00d
+ (void)unregisterPreview:(id)preview;	// 0x2f2edead
- (void)_discardRepresentedObjectSafely;	// 0x2f2ef0d5
- (void)_protectRepresentedObjectSafely;	// 0x2f2ef0c1
- (void)_registerURL:(id)url mimeType:(id)type textEncoding:(id)encoding;	// 0x2f2ef1c5
- (id)_requestForURL:(id)url;	// 0x2f2ee49d
- (id)_voidRequest;	// 0x2f2ee42d
- (void)appendData:(id)data forURL:(id)url lastChunk:(BOOL)chunk;	// 0x2f2efaf9
// declared property getter: - (id)attachmentURLs;	// 0x2f2f0079
- (void)cancel;	// 0x2f2ee419
- (unsigned long)cfEncodingForAttachmentURL:(id)attachmentURL;	// 0x2f2f0089
- (void)computePreview;	// 0x2f2ee415
- (void)computePreviewInThread;	// 0x2f2eea09
// declared property getter: - (id)connection;	// 0x2f2f0279
// declared property getter: - (id)data;	// 0x2f2f01d9
- (void)dealloc;	// 0x2f2ee1c9
// declared property getter: - (id)delegate;	// 0x2f2f0299
- (const void *)documentObject;	// 0x2f2ef1b5
// declared property getter: - (id)fileName;	// 0x2f2f01f9
// declared property getter: - (BOOL)htmlErrorDisabled;	// 0x2f2f02e5
// declared property getter: - (BOOL)isCancelled;	// 0x2f2ef081
// declared property getter: - (BOOL)isComputed;	// 0x2f2ef0b1
- (id)mimeTypeForAttachmentURL:(id)attachmentURL;	// 0x2f2f019d
- (id)newAttachmentURLWithID:(id)anId properties:(id)properties;	// 0x2f2ef755
- (id)newSafeAttachmentURLWithID:(id)anId mimeType:(id)type textEncoding:(id)encoding;	// 0x2f2ef92d
// declared property getter: - (int)pageCount;	// 0x2f2f02a9
// declared property getter: - (float)pageHeight;	// 0x2f2f02d1
// declared property getter: - (float)pageWidth;	// 0x2f2f02bd
// declared property getter: - (id)password;	// 0x2f2f0239
// declared property getter: - (id)previewRequest;	// 0x2f2eff1d
// declared property getter: - (id)previewResponse;	// 0x2f2eff91
// declared property getter: - (id)previewURL;	// 0x2f2f0315
// declared property getter: - (BOOL)progressive;	// 0x2f2f0259
- (id)safeRequestForRequest:(id)request;	// 0x2f2ee601
// declared property setter: - (void)setConnection:(id)connection;	// 0x2f2f0289
// declared property setter: - (void)setData:(id)data;	// 0x2f2f01e9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f2edc6d
- (void)setDocumentObject:(const void *)object callbacks:(const XXStruct_QrC3XA *)callbacks;	// 0x2f2ef125
- (void)setError:(id)error;	// 0x2f2efe39
// declared property setter: - (void)setFileName:(id)name;	// 0x2f2f0209
// declared property setter: - (void)setHtmlErrorDisabled:(BOOL)disabled;	// 0x2f2f02fd
// declared property setter: - (void)setPassword:(id)password;	// 0x2f2f0249
// declared property setter: - (void)setProgressive:(BOOL)progressive;	// 0x2f2f0269
// declared property setter: - (void)setUrl:(id)url;	// 0x2f2f01c9
// declared property setter: - (void)setUti:(id)uti;	// 0x2f2f0229
- (void)startComputingPreview;	// 0x2f2ee99d
- (void)startDataRepresentationWithContentType:(id)contentType properties:(id)properties;	// 0x2f2ef275
// declared property getter: - (id)url;	// 0x2f2f01b9
// declared property getter: - (id)uti;	// 0x2f2f0219
@end
