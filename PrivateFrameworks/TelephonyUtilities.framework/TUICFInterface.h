/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUICFInterface : NSObject

+ (BOOL)allowCallForDestinationID:(id)arg1 service:(int)arg2 isRelay:(BOOL)arg3;
+ (void)allowCallForDestinationID:(id)arg1 service:(int)arg2 isRelay:(BOOL)arg3 completionHandler:(id /* block */)arg4;
+ (int)serviceForServiceIdentifier:(id)arg1;
+ (struct __CFString { }*)serviceIdentifierForService:(int)arg1 isRelay:(BOOL)arg2;
+ (BOOL)serviceIdentifierIsRelay:(id)arg1;

@end
