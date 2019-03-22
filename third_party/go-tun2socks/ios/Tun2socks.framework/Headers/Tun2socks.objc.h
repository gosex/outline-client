// Objective-C API for talking to github.com/Jigsaw-Code/outline-go-tun2socks/apple Go package.
//   gobind -lang=objc github.com/Jigsaw-Code/outline-go-tun2socks/apple
//
// File is generated by gobind. Do not edit.

#ifndef __Tun2socks_H__
#define __Tun2socks_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


@protocol Tun2socksAppleTunnel;
@class Tun2socksAppleTunnel;
@protocol Tun2socksTunWriter;
@class Tun2socksTunWriter;

@protocol Tun2socksAppleTunnel <NSObject>
- (void)disconnect;
- (BOOL)isConnected;
- (void)setUDPEnabled:(BOOL)isUDPEnabled;
- (BOOL)write:(NSData* _Nullable)data ret0_:(long*)ret0_ error:(NSError* _Nullable*)error;
@end

@protocol Tun2socksTunWriter <NSObject>
- (BOOL)close:(NSError* _Nullable*)error;
- (BOOL)write:(NSData* _Nullable)p0 n:(long*)n error:(NSError* _Nullable*)error;
@end

/**
 * ConnectSocksTunnel reads packets from a TUN device and routes it to a SOCKS server. Returns an
AppleTunnel instance that should be used to input packets to the tunnel.

`tunWriter` is used to output packets to the TUN (VPN).
`host` is  IP address of the SOCKS proxy server.
`port` is the port of the SOCKS proxy server.
`isUDPEnabled` indicates whether the tunnel and/or network enable UDP proxying.

Sets an error if the tunnel fails to connect.
 */
FOUNDATION_EXPORT id<Tun2socksAppleTunnel> _Nullable Tun2socksConnectSocksTunnel(id<Tun2socksTunWriter> _Nullable tunWriter, NSString* _Nullable host, long port, BOOL isUDPEnabled, NSError* _Nullable* error);

@class Tun2socksAppleTunnel;

@class Tun2socksTunWriter;

/**
 * AppleTunnel embeds the tun2socks.Tunnel interface so it gets exported by gobind.
 */
@interface Tun2socksAppleTunnel : NSObject <goSeqRefInterface, Tun2socksAppleTunnel> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (void)disconnect;
- (BOOL)isConnected;
- (void)setUDPEnabled:(BOOL)isUDPEnabled;
- (BOOL)write:(NSData* _Nullable)data ret0_:(long*)ret0_ error:(NSError* _Nullable*)error;
@end

/**
 * TunWriter is an interface that allows for outputting packets to the TUN (VPN).
 */
@interface Tun2socksTunWriter : NSObject <goSeqRefInterface, Tun2socksTunWriter> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (BOOL)close:(NSError* _Nullable*)error;
- (BOOL)write:(NSData* _Nullable)p0 n:(long*)n error:(NSError* _Nullable*)error;
@end

#endif
