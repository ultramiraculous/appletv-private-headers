/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "ATVUpdatable.h"

@class NSURL, NSString, NSDictionary, ATVFeedDocument, ATVMerchant, BRBackgroundTask, ATVFeedRootElement;

__attribute__((visibility("hidden")))
@interface ATVFeedController : BRViewController <ATVUpdatable> {
	BRBackgroundTask *_updateTask;	// 100 = 0x64
	BOOL _everWasPushed;	// 104 = 0x68
	BOOL _isVolatile;	// 105 = 0x69
	BOOL _isDirty;	// 106 = 0x6a
	NSString *_onReload;	// 108 = 0x6c
	NSString *_onRefresh;	// 112 = 0x70
	ATVMerchant *_merchant;	// 116 = 0x74
	NSDictionary *_data;	// 120 = 0x78
	ATVFeedRootElement *_feedElement;	// 124 = 0x7c
	NSURL *_currentURL;	// 128 = 0x80
	ATVFeedDocument *_feedDocument;	// 132 = 0x84
}
@property(readonly, assign) NSString *_inlineJavaScriptSourceURL;	// G=0x128b19; 
@property(retain) NSURL *currentURL;	// G=0x1288bd; S=0x1288d1; @synthesize=_currentURL
@property(retain) NSDictionary *data;	// G=0x128875; S=0x128889; @synthesize=_data
@property(retain) ATVFeedDocument *feedDocument;	// G=0x1288e1; S=0x1288f5; @synthesize=_feedDocument
@property(retain) ATVFeedRootElement *feedElement;	// G=0x128899; S=0x1288ad; @synthesize=_feedElement
@property(retain) ATVMerchant *merchant;	// G=0x128851; S=0x128865; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x1284a5
- (id)initWithFeedElement:(id)feedElement;	// 0x128391
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x128ac1
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x12896d
- (void)_cancelUpdateTask;	// 0x128ac9
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x128ac5
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x128971
- (void)_handleWindowMaxBoundsChanged;	// 0x128805
- (id)_initWithMerchant:(id)merchant;	// 0x1282d9
// declared property getter: - (id)_inlineJavaScriptSourceURL;	// 0x128b19
- (void)_markAsDirtyAndReloadIfActive;	// 0x128d15
- (void)_purchaseAcquired:(id)acquired;	// 0x1291c1
- (void)_reloadPage;	// 0x128b61
- (void)_updateFromExhumeOrPush;	// 0x128cdd
- (void)_updateRefreshInterval;	// 0x128d75
- (void)_updateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x128975
- (void)_updateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x128905
// declared property getter: - (id)currentURL;	// 0x1288bd
// declared property getter: - (id)data;	// 0x128875
- (void)dealloc;	// 0x128615
// declared property getter: - (id)feedDocument;	// 0x1288e1
// declared property getter: - (id)feedElement;	// 0x128899
- (void)markAsDirty;	// 0x128815
// declared property getter: - (id)merchant;	// 0x128851
// declared property setter: - (void)setCurrentURL:(id)url;	// 0x1288d1
// declared property setter: - (void)setData:(id)data;	// 0x128889
// declared property setter: - (void)setFeedDocument:(id)document;	// 0x1288f5
// declared property setter: - (void)setFeedElement:(id)element;	// 0x1288ad
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x128865
- (void)updateWithFeedElement:(id)feedElement;	// 0x12883d
- (void)updateWithPropertyList:(id)propertyList;	// 0x128829
- (void)wasExhumed;	// 0x12871d
- (void)wasPopped;	// 0x1287c5
- (void)wasPushed;	// 0x12875d
@end

