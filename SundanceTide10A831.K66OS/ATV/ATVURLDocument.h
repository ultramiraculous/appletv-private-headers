/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ISURLOperationDelegate.h"
#import "BRMercantile.h"

@class ISURLOperation, NSURLRequest, NSURLResponse, NSArray, BRMerchant, NSMutableDictionary, NSError, NSDate, NSData, SSURLRequestProperties;

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
@property(retain, nonatomic) NSURLRequest *URLRequest;	// G=0x1d7f15; S=0x1d7f25; @synthesize=_URLRequest
@property(retain, nonatomic) NSURLResponse *URLResponse;	// G=0x1d7f4d; S=0x1d7f5d; @synthesize=_URLResponse
@property(retain, nonatomic) NSArray *behaviors;	// G=0x1d7e65; S=0x1d7e75; @synthesize=_behaviors
@property(retain, nonatomic) NSData *content;	// G=0x1d802d; S=0x1d803d; @synthesize=_content
@property(assign, nonatomic, getter=isDecoratedByMerchant) BOOL decoratedByMerchant;	// G=0x1d7e9d; S=0x1d7ead; @synthesize=_decoratedByMerchant
@property(assign) BOOL didLoad;	// G=0x1d8095; S=0x1d80ad; @synthesize=_didLoad
@property(retain, nonatomic) NSError *error;	// G=0x1d7f85; S=0x1d7f95; @synthesize=_error
@property(assign) BOOL isCanceled;	// G=0x1d8065; S=0x1d807d; @synthesize
@property(retain, nonatomic) NSDate *loadedDate;	// G=0x1d7ff5; S=0x1d8005; @synthesize=_loadedDate
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x1d6fdd; S=0x1d7eed; @synthesize=_merchant
@property(readonly, assign, nonatomic) id propertyList;	// G=0x1d6ab9; 
@property(retain, nonatomic) NSDate *requestDate;	// G=0x1d7fbd; S=0x1d7fcd; @synthesize=_requestDate
@property(assign) BOOL shouldCompleteOnMainThread;	// G=0x1d7ebd; S=0x1d7ed5; @synthesize=_shouldCompleteOnMainThread
@property(readonly, assign, nonatomic) int statusCode;	// G=0x1d6a19; 
+ (void)addActiveDocument:(id)document;	// 0x1d6ee9
+ (id)documentWithRequestProperties:(id)requestProperties forMerchant:(id)merchant;	// 0x1d5e31
+ (id)documentWithURLRequest:(id)urlrequest forMerchant:(id)merchant;	// 0x1d5e91
+ (void)initialize;	// 0x1d5ef1
+ (void)loadDocuments:(id)documents forEachResponse:(id)eachResponse completionHandler:(id)handler;	// 0x1d66ed
+ (void)removeActiveDocument:(id)document;	// 0x1d6f89
- (id)init;	// 0x1d6145
- (id)initWithRequestProperties:(id)requestProperties forMerchant:(id)merchant;	// 0x1d5f5d
- (id)initWithURLRequest:(id)urlrequest forMerchant:(id)merchant;	// 0x1d6169
- (void).cxx_destruct;	// 0x1d80c5
// declared property getter: - (id)URLRequest;	// 0x1d7f15
// declared property getter: - (id)URLResponse;	// 0x1d7f4d
- (void)_applyBehaviors;	// 0x1d6b41
- (void)_finish:(id)finish;	// 0x1d6d6d
- (void)_runCompletionBlock;	// 0x1d6e21
- (void)addBehavior:(id)behavior;	// 0x1d61f9
// declared property getter: - (id)behaviors;	// 0x1d7e65
- (void)cancel;	// 0x1d6625
// declared property getter: - (id)content;	// 0x1d802d
- (void)dealloc;	// 0x1d65d1
// declared property getter: - (BOOL)didLoad;	// 0x1d8095
// declared property getter: - (id)error;	// 0x1d7f85
// declared property getter: - (BOOL)isCanceled;	// 0x1d8065
// declared property getter: - (BOOL)isDecoratedByMerchant;	// 0x1d7e9d
- (void)load;	// 0x1d6611
- (void)loadWithReponseBlock:(id)reponseBlock;	// 0x1d62a1
// declared property getter: - (id)loadedDate;	// 0x1d7ff5
// declared property getter: - (id)merchant;	// 0x1d6fdd
- (id)metadataForKey:(id)key;	// 0x1d69f9
- (void)operation:(id)operation didReceiveResponse:(id)response;	// 0x1d7be5
- (void)operation:(id)operation failedWithError:(id)error;	// 0x1d70b9
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x1d7bf9
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x1d7e51
// declared property getter: - (id)propertyList;	// 0x1d6ab9
// declared property getter: - (id)requestDate;	// 0x1d7fbd
// declared property setter: - (void)setBehaviors:(id)behaviors;	// 0x1d7e75
// declared property setter: - (void)setContent:(id)content;	// 0x1d803d
// declared property setter: - (void)setDecoratedByMerchant:(BOOL)merchant;	// 0x1d7ead
// declared property setter: - (void)setDidLoad:(BOOL)load;	// 0x1d80ad
// declared property setter: - (void)setError:(id)error;	// 0x1d7f95
// declared property setter: - (void)setIsCanceled:(BOOL)canceled;	// 0x1d807d
// declared property setter: - (void)setLoadedDate:(id)date;	// 0x1d8005
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x1d7eed
- (void)setMetadata:(id)metadata forKey:(id)key;	// 0x1d69bd
// declared property setter: - (void)setRequestDate:(id)date;	// 0x1d7fcd
// declared property setter: - (void)setShouldCompleteOnMainThread:(BOOL)completeOnMainThread;	// 0x1d7ed5
// declared property setter: - (void)setURLRequest:(id)request;	// 0x1d7f25
// declared property setter: - (void)setURLResponse:(id)response;	// 0x1d7f5d
// declared property getter: - (BOOL)shouldCompleteOnMainThread;	// 0x1d7ebd
// declared property getter: - (int)statusCode;	// 0x1d6a19
@end

