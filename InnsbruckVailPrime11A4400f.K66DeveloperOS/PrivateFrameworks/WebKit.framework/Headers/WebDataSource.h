/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>
#import "WebKit-Structs.h"


@interface WebDataSource : NSObject {
	void *_private;	// 4 = 0x4
}
@property(assign) id dataSourceDelegate;	// G=0x33956c6d; S=0x33956c59; converted property
+ (id)_repTypesAllowImageTypeOmission:(BOOL)omission;	// 0x3394172d
+ (Class)_representationClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;	// 0x33942039
+ (void)initialize;	// 0x33956761
- (id)initWithRequest:(id)request;	// 0x33957091
- (id)_URL;	// 0x33957061
- (void)_addSubframeArchives:(id)archives;	// 0x339567ad
- (id)_documentFragmentWithArchive:(id)archive;	// 0x33956ce5
- (id)_documentFragmentWithImageResource:(id)imageResource;	// 0x33956f29
- (DocumentLoader *)_documentLoader;	// 0x3393a0a1
- (void)_finishedLoading;	// 0x339446e9
- (id)_imageElementWithImageResource:(id)imageResource;	// 0x33956f95
- (id)_initWithDocumentLoader:(PassRefPtr<WebDocumentLoaderMac>)documentLoader;	// 0x339391d9
- (BOOL)_isDocumentHTML;	// 0x3392ed41
- (id)_mainDocumentError;	// 0x33956795
- (void)_makeRepresentation;	// 0x33941dd5
- (void)_receivedData:(id)data;	// 0x3394350d
- (void)_replaceSelectionWithArchive:(id)archive selectReplacement:(BOOL)replacement;	// 0x33956c95
- (id)_responseMIMEType;	// 0x3392ed75
- (void)_revertToProvisionalState;	// 0x33956c81
- (void)_setAllowToBeMemoryMapped;	// 0x33956a4d
- (void)_setDeferMainResourceDataLoad:(BOOL)load;	// 0x3395692d
- (void)_setMainDocumentError:(id)error;	// 0x3394ab49
- (void)_setOverrideTextEncodingName:(id)name;	// 0x33956951
- (void)_setRepresentation:(id)representation;	// 0x339420dd
- (BOOL)_transferApplicationCache:(id)cache;	// 0x33956821
- (id)_webView;	// 0x33930719
- (void)addSubresource:(id)subresource;	// 0x33957aa9
- (id)data;	// 0x33957281
// converted property getter: - (id)dataSourceDelegate;	// 0x33956c6d
- (void)dealloc;	// 0x33943209
- (void)finalize;	// 0x3395721d
- (id)initialRequest;	// 0x33943b7d
- (BOOL)isLoading;	// 0x339573dd
- (id)mainResource;	// 0x33957549
- (id)pageTitle;	// 0x3393a0b5
- (id)representation;	// 0x3393a0dd
- (id)request;	// 0x3392f76d
- (id)response;	// 0x3392ed9d
// converted property setter: - (void)setDataSourceDelegate:(id)delegate;	// 0x33956c59
- (id)subresourceForURL:(id)url;	// 0x339578f9
- (id)subresources;	// 0x33957691
- (id)textEncodingName;	// 0x33957381
- (id)unreachableURL;	// 0x3392f73d
- (id)webArchive;	// 0x339573f9
- (id)webFrame;	// 0x33930741
@end
