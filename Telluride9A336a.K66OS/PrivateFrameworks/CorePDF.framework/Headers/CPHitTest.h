/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class CPPage, NSMutableArray;

@interface CPHitTest : NSObject {
	CPPage *page;	// 4 = 0x4
	NSMutableArray *objectsOnPage;	// 8 = 0x8
	float mapTemp;	// 12 = 0xc
}
@property(readonly, retain) CPPage *page;	// G=0x349ed1c9; converted property
- (id)initWithPage:(id)page;	// 0x349ed1d9
- (id)column:(CGPoint)column;	// 0x349ed421
- (unsigned)columnsAt:(CGPoint)at;	// 0x349ed479
- (int)compareByReadingOrder:(CGPoint)order to:(CGPoint)to;	// 0x349ed231
- (void)dealloc;	// 0x349ed811
- (id)findBestMatch:(id)match atPoint:(CGPoint)point;	// 0x349ed871
- (void)findClickableObjects:(BOOL)objects;	// 0x349ed9bd
- (id)findObjectIn:(id)anIn at:(CGPoint)at count:(int *)count;	// 0x349ee05d
- (BOOL)hitTestGraphicObject:(id)object point:(CGPoint)point;	// 0x349ede2d
- (BOOL)hitTestParagraph:(id)paragraph point:(CGPoint)point;	// 0x349edf25
- (id)layoutArea:(CGPoint)area;	// 0x349ed4b1
- (id)objectAtPoint:(CGPoint)point;	// 0x349ed28d
// converted property getter: - (id)page;	// 0x349ed1c9
- (id)paragraph:(CGPoint)paragraph;	// 0x349ed67d
- (id)paragraphNear:(CGPoint)near;	// 0x349ed519
- (id)textLine:(CGPoint)line;	// 0x349ed2c5
@end

