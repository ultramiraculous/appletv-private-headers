/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument, NSMutableArray, SFUNoCopyDictionary, WXOAVState, OCPPackagePart, OAXDrawingState;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface WXState : NSObject {
@private
	WDDocument *mDocument;	// 4 = 0x4
	SFUNoCopyDictionary *mTextNodesToBeAdded;	// 8 = 0x8
	SFUNoCopyDictionary *mMapBookmarkIdToName;	// 12 = 0xc
	SFUNoCopyDictionary *mMapAnnotationIdToAnnotation;	// 16 = 0x10
	OCPPackagePart *mPackagePart;	// 20 = 0x14
	OCPPackagePart *mAnnotationPart;	// 24 = 0x18
	xmlDoc *mFootnoteDocument;	// 28 = 0x1c
	xmlNode *mFootnotes;	// 32 = 0x20
	xmlDoc *mEndnoteDocument;	// 36 = 0x24
	xmlNode *mEndnotes;	// 40 = 0x28
	xmlDoc *mAnnotationDocument;	// 44 = 0x2c
	xmlNode *mAnnotations;	// 48 = 0x30
	NSMutableArray *mDeleteAuthorStack;	// 52 = 0x34
	NSMutableArray *mDeleteDateStack;	// 56 = 0x38
	NSMutableArray *mEditAuthorStack;	// 60 = 0x3c
	NSMutableArray *mEditDateStack;	// 64 = 0x40
	NSMutableArray *mFormatAuthorStack;	// 68 = 0x44
	NSMutableArray *mFormatDateStack;	// 72 = 0x48
	WXOAVState *mWXOavState;	// 76 = 0x4c
	OAXDrawingState *mDrawingState;	// 80 = 0x50
	int mCurrentOfficeArtTextType;	// 84 = 0x54
	BOOL mNewSectionRequested;	// 88 = 0x58
	unsigned long mCurrentRowCNFStyle;	// 92 = 0x5c
	unsigned long mCurrentCellCNFStyle;	// 96 = 0x60
	BOOL mCurrentTableWraps;	// 100 = 0x64
	id<OCCancelDelegate> mCancelDelegate;	// 104 = 0x68
	BOOL mIsThumbnail;	// 108 = 0x6c
}
@property(retain) id annotationPart;	// G=0x35766b61; S=0x35766d45; converted property
@property(retain, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x35679129; S=0x35667c49; @synthesize=mCancelDelegate
@property(assign) unsigned long currentCellCNFStyle;	// G=0x35673065; S=0x3567a54d; converted property
@property(assign, nonatomic) int currentOfficeArtTextType;	// G=0x3567ff85; S=0x35674429; @synthesize=mCurrentOfficeArtTextType
@property(assign) unsigned long currentRowCNFStyle;	// G=0x35673055; S=0x3567a7ad; converted property
@property(assign) BOOL currentTableWraps;	// G=0x3567a7bd; S=0x3567032d; converted property
@property(retain) id document;	// G=0x3566cc09; S=0x35667b2d; converted property
@property(assign) BOOL isThumbnail;	// G=0x35766b81; S=0x35766b71; converted property
@property(assign, getter=isNewSectionRequested) BOOL newSectionRequested;	// G=0x35672d31; S=0x35679041; converted property
@property(retain) id packagePart;	// G=0x35667909; S=0x35678335; converted property
- (id)init;	// 0x3566759d
- (id)initNoStacksWith:(id)with;	// 0x3576705d
- (void)addAnnotationID:(long)anId annotation:(id)annotation;	// 0x35766f49
- (void)addBookmarkId:(int)anId name:(id)name;	// 0x35673df1
- (void)addText:(id)text node:(xmlNode *)node;	// 0x35766f9d
// converted property getter: - (id)annotationPart;	// 0x35766b61
- (id)annotationWithID:(long)anId;	// 0x35766ef9
- (id)bookmarkName:(int)name;	// 0x35677929
// declared property getter: - (id)cancelDelegate;	// 0x35679129
- (void)clearOutNodesToBeAdded:(id)beAdded;	// 0x35673191
// converted property getter: - (unsigned long)currentCellCNFStyle;	// 0x35673065
- (id)currentDeleteAuthor;	// 0x35673f01
- (id)currentDeleteDate;	// 0x35673f21
- (id)currentEditAuthor;	// 0x35673f41
- (id)currentEditDate;	// 0x35673f61
- (id)currentFormatAuthor;	// 0x35766bb1
- (id)currentFormatDate;	// 0x35766b91
// declared property getter: - (int)currentOfficeArtTextType;	// 0x3567ff85
// converted property getter: - (unsigned long)currentRowCNFStyle;	// 0x35673055
// converted property getter: - (BOOL)currentTableWraps;	// 0x3567a7bd
- (void)dealloc;	// 0x35681079
// converted property getter: - (id)document;	// 0x3566cc09
- (id)drawingState;	// 0x35668371
// converted property getter: - (BOOL)isNewSectionRequested;	// 0x35672d31
// converted property getter: - (BOOL)isThumbnail;	// 0x35766b81
- (id)nodesToBeAdded:(id)beAdded;	// 0x35673155
// converted property getter: - (id)packagePart;	// 0x35667909
- (void)popDeleteAuthorDate;	// 0x35766cc9
- (void)popEditAuthorDate;	// 0x35766c4d
- (void)popFormatAuthorDate;	// 0x35766bd1
- (void)pushDeleteAuthor:(id)author date:(id)date;	// 0x35766d05
- (void)pushEditAuthor:(id)author date:(id)date;	// 0x35766c89
- (void)pushFormatAuthor:(id)author date:(id)date;	// 0x35766c0d
// converted property setter: - (void)setAnnotationPart:(id)part;	// 0x35766d45
// declared property setter: - (void)setCancelDelegate:(id)delegate;	// 0x35667c49
// converted property setter: - (void)setCurrentCellCNFStyle:(unsigned long)style;	// 0x3567a54d
// declared property setter: - (void)setCurrentOfficeArtTextType:(int)type;	// 0x35674429
// converted property setter: - (void)setCurrentRowCNFStyle:(unsigned long)style;	// 0x3567a7ad
// converted property setter: - (void)setCurrentTableWraps:(BOOL)wraps;	// 0x3567032d
// converted property setter: - (void)setDocument:(id)document;	// 0x35667b2d
- (void)setDocumentPart:(id)part;	// 0x35672035
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x35766b71
// converted property setter: - (void)setNewSectionRequested:(BOOL)requested;	// 0x35679041
// converted property setter: - (void)setPackagePart:(id)part;	// 0x35678335
- (id)wxoavState;	// 0x35670831
- (xmlNode *)xmlAnnotationWithID:(long)anId;	// 0x35766d85
- (xmlNode *)xmlEndnoteWithID:(long)anId;	// 0x35766e01
- (xmlNode *)xmlFootnoteWithID:(long)anId;	// 0x35766e7d
@end

