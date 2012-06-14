/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
 */

#import <NSObject.h> // Unknown library


@interface AWDServerConnection : NSObject {
}
- (id)initWithComponentId:(unsigned long)componentId;	// 0x31530d01
- (void)dealloc;	// 0x31530e11
- (id)newMetricContainerWithIdentifier:(unsigned long)identifier;	// 0x31530f19
- (BOOL)registerQueriableMetricCallback:(id)callback forIdentifier:(unsigned long)identifier;	// 0x31531149
- (BOOL)registerQueriableMetricCallbackForLogging:(id)logging;	// 0x315311dd
- (BOOL)submitMetric:(id)metric;	// 0x31531009
@end
