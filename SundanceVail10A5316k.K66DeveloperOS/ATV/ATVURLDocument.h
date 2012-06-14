/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ISURLOperationDelegate.h"
#import "BRMercantile.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, BRMerchant, NSMutableDictionary, NSDate, SSURLRequestProperties, NSData, ISURLOperation, NSURLRequest, NSError, NSURLResponse;

__attribute__((visibility("hidden")))
@interface ATVURLDocument : XXUnknownSuperclass <ISURLOperationDelegate, BRMercantile> {
	SSURLRequestProperties *_properties;	// 4 = 0x4
	ISURLOperation *_operation;	// 8 = 0x8
	id _completionBlock;	// 12 = 0xc
	NSMutableDictionary *_metadata;	// 16 = 0x10
	NSArray *_behaviors;	// 20 = 0x14
	BOOL _decoratedByMerchant;	// 24 = 0x18
	BOOL _shouldCompleteOnMainThread;	// 25 = 0x19
	BRMerchant *_merchant;	// 28 = 0x1c
	NSURLRequest *_URLRequest;	// 32 = 0x20
	NSURLResponse *_URLResponse;	// 36 = 0x24
	NSError *_error;	// 40 = 0x28
	NSDate *_requestDate;	// 44 = 0x2c
	NSDate *_loadedDate;	// 48 = 0x30
	NSData *_content;	// 52 = 0x34
	BOOL isCanceled;	// 56 = 0x38
	BOOL _didLoad;	// 57 = 0x39
}
@property(retain, nonatomic) NSURLRequest *URLRequest;	// G=0x1b0e71; S=0x1b0e81; @synthesize=_URLRequest
@property(retain, nonatomic) NSURLResponse *URLResponse;	// G=0x1b0ea9; S=0x1b0eb9; @synthesize=_URLResponse
@property(retain, nonatomic) NSArray *behaviors;	// G=0x1b0dc1; S=0x1b0dd1; @synthesize=_behaviors
@property(retain, nonatomic) NSData *content;	// G=0x1b0f89; S=0x1b0f99; @synthesize=_content
@property(assign, nonatomic, getter=isDecoratedByMerchant) BOOL decoratedByMerchant;	// G=0x1b0df9; S=0x1b0e09; @synthesize=_decoratedByMerchant
@property(assign) BOOL didLoad;	// G=0x1b0ff1; S=0x1b1009; @synthesize=_didLoad
@property(retain, nonatomic) NSError *error;	// G=0x1b0ee1; S=0x1b0ef1; @synthesize=_error
@property(assign) BOOL isCanceled;	// G=0x1b0fc1; S=0x1b0fd9; @synthesize
@property(retain, nonatomic) NSDate *loadedDate;	// G=0x1b0f51; S=0x1b0f61; @synthesize=_loadedDate
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x1b0a05; S=0x1b0e49; @synthesize=_merchant
@property(readonly, assign, nonatomic) id propertyList;	// G=0x1b04ed; 
@property(retain, nonatomic) NSDate *requestDate;	// G=0x1b0f19; S=0x1b0f29; @synthesize=_requestDate
@property(assign) BOOL shouldCompleteOnMainThread;	// G=0x1b0e19; S=0x1b0e31; @synthesize=_shouldCompleteOnMainThread
@property(readonly, assign, nonatomic) int statusCode;	// G=0x1b044d; 
+ (void)addActiveDocument:(id)document;	// 0x1b0911
+ (id)documentWithRequestProperties:(id)requestProperties forMerchant:(id)merchant;	// 0x1af909
+ (id)documentWithURLRequest:(id)urlrequest forMerchant:(id)merchant;	// 0x1af969
+ (void)loadDocuments:(id)documents forEachResponse:(id)eachResponse completionHandler:(id)handler;	// 0x1b013d
+ (void)removeActiveDocument:(id)document;	// 0x1b09b1
- (id)init;	// 0x1afbb1
- (id)initWithRequestProperties:(id)requestProperties forMerchant:(id)merchant;	// 0x1af9c9
- (id)initWithURLRequest:(id)urlrequest forMerchant:(id)merchant;	// 0x1afbd5
- (void).cxx_destruct;	// 0x1b1021
// declared property getter: - (id)URLRequest;	// 0x1b0e71
// declared property getter: - (id)URLResponse;	// 0x1b0ea9
- (void)_applyBehaviors;	// 0x1b0575
- (void)_finish:(id)finish;	// 0x1b0795
- (void)_runCompletionBlock;	// 0x1b0849
- (void)addBehavior:(id)behavior;	// 0x1afc65
// declared property getter: - (id)behaviors;	// 0x1b0dc1
- (void)cancel;	// 0x1b0075
// declared property getter: - (id)content;	// 0x1b0f89
- (void)dealloc;	// 0x1b0021
// declared property getter: - (BOOL)didLoad;	// 0x1b0ff1
// declared property getter: - (id)error;	// 0x1b0ee1
// declared property getter: - (BOOL)isCanceled;	// 0x1b0fc1
// declared property getter: - (BOOL)isDecoratedByMerchant;	// 0x1b0df9
- (void)load;	// 0x1b0061
- (void)loadWithReponseBlock:(id)reponseBlock;	// 0x1afd0d
// declared property getter: - (id)loadedDate;	// 0x1b0f51
// declared property getter: - (id)merchant;	// 0x1b0a05
- (id)metadataForKey:(id)key;	// 0x1b042d
- (void)operation:(id)operation didReceiveResponse:(id)response;	// 0x1b0b41
- (void)operation:(id)operation failedWithError:(id)error;	// 0x1b0ae1
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x1b0b55
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x1b0dad
// declared property getter: - (id)propertyList;	// 0x1b04ed
// declared property getter: - (id)requestDate;	// 0x1b0f19
// declared property setter: - (void)setBehaviors:(id)behaviors;	// 0x1b0dd1
// declared property setter: - (void)setContent:(id)content;	// 0x1b0f99
// declared property setter: - (void)setDecoratedByMerchant:(BOOL)merchant;	// 0x1b0e09
// declared property setter: - (void)setDidLoad:(BOOL)load;	// 0x1b1009
// declared property setter: - (void)setError:(id)error;	// 0x1b0ef1
// declared property setter: - (void)setIsCanceled:(BOOL)canceled;	// 0x1b0fd9
// declared property setter: - (void)setLoadedDate:(id)date;	// 0x1b0f61
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x1b0e49
- (void)setMetadata:(id)metadata forKey:(id)key;	// 0x1b040d
// declared property setter: - (void)setRequestDate:(id)date;	// 0x1b0f29
// declared property setter: - (void)setShouldCompleteOnMainThread:(BOOL)completeOnMainThread;	// 0x1b0e31
// declared property setter: - (void)setURLRequest:(id)request;	// 0x1b0e81
// declared property setter: - (void)setURLResponse:(id)response;	// 0x1b0eb9
// declared property getter: - (BOOL)shouldCompleteOnMainThread;	// 0x1b0e19
// declared property getter: - (int)statusCode;	// 0x1b044d
@end

