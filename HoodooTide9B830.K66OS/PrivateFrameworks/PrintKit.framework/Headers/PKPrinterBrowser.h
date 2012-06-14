/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import "PrintKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSFileHandle, NSMutableArray;
@protocol PKPrinterBrowserDelegate;

@interface PKPrinterBrowser : NSObject {
	id<PKPrinterBrowserDelegate> delegate;	// 4 = 0x4
@private
	DNSServiceRef_tRef mainBrowserRef;	// 8 = 0x8
	DNSServiceRef_tRef ippBrowserRef;	// 12 = 0xc
	DNSServiceRef_tRef ippsBrowserRef;	// 16 = 0x10
	DNSServiceRef_tRef localippBrowserRef;	// 20 = 0x14
	DNSServiceRef_tRef localippsBrowserRef;	// 24 = 0x18
	NSMutableDictionary *printers;	// 28 = 0x1c
	NSMutableDictionary *printersByUUID;	// 32 = 0x20
	NSFileHandle *handle;	// 36 = 0x24
	unsigned char originalCellFlag;	// 40 = 0x28
	unsigned char originalWifiFlag;	// 41 = 0x29
	dispatch_queue_s *printersQueue;	// 44 = 0x2c
	NSMutableArray *pendingList;	// 48 = 0x30
}
@property(assign, nonatomic) id<PKPrinterBrowserDelegate> delegate;	// G=0x325b9a69; S=0x325b9a79; @synthesize
@property(retain, nonatomic) NSFileHandle *handle;	// G=0x325b9a59; S=0x325ba105; @synthesize
@property(retain, nonatomic) NSMutableArray *pendingList;	// G=0x325b9a29; S=0x325ba155; @synthesize
@property(retain, nonatomic) NSMutableDictionary *printers;	// G=0x325b9a49; S=0x325ba12d; @synthesize
@property(retain, nonatomic) NSMutableDictionary *printersByUUID;	// G=0x325b9a19; S=0x325ba17d; @synthesize
@property(readonly, assign, nonatomic) dispatch_queue_s *printersQueue;	// G=0x325b9a39; @synthesize
+ (id)browserWithDelegate:(id)delegate;	// 0x325ba0bd
- (id)initWithDelegate:(id)delegate;	// 0x325ba939
- (void)addBlockToPendingList:(id)pendingList;	// 0x325ba541
- (void)addLimboPrinter:(id)printer local:(BOOL)local;	// 0x325ba6a1
- (void)addQueryResult:(id)result toPrinter:(id)printer;	// 0x325b9c99
- (void)browseCallback:(unsigned)callback interface:(unsigned)interface name:(const char *)name regType:(const char *)type domain:(const char *)domain;	// 0x325ba439
- (void)browseLocalCallback:(unsigned)callback interface:(unsigned)interface name:(const char *)name regType:(const char *)type domain:(const char *)domain;	// 0x325ba331
- (void)dealloc;	// 0x325ba7d1
// declared property getter: - (id)delegate;	// 0x325b9a69
// declared property getter: - (id)handle;	// 0x325b9a59
- (void)handleNotification:(id)notification;	// 0x325ba1a5
// declared property getter: - (id)pendingList;	// 0x325b9a29
// declared property getter: - (id)printers;	// 0x325b9a49
// declared property getter: - (id)printersByUUID;	// 0x325b9a19
// declared property getter: - (dispatch_queue_s *)printersQueue;	// 0x325b9a39
- (void)queryCallback:(int)callback flags:(unsigned)flags fullName:(const char *)name rdlen:(unsigned short)rdlen rdata:(const void *)rdata;	// 0x325ba1e5
- (void)reissueTXTQuery:(id)query;	// 0x325ba625
- (void)removePrinter:(id)printer;	// 0x325b9b09
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x325b9a79
// declared property setter: - (void)setHandle:(id)handle;	// 0x325ba105
// declared property setter: - (void)setPendingList:(id)list;	// 0x325ba155
// declared property setter: - (void)setPrinters:(id)printers;	// 0x325ba12d
// declared property setter: - (void)setPrintersByUUID:(id)uuid;	// 0x325ba17d
@end
