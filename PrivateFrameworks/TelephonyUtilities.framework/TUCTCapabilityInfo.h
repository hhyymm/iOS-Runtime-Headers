/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCTCapabilityInfo : NSObject <NSCopying, NSSecureCoding, TUPubliclyAccessibleCopying> {
    BOOL _canEnable;
    BOOL _enabled;
    NSData *_provisioningPostData;
    int _provisioningStatus;
    NSURL *_provisioningURL;
}

@property (nonatomic) BOOL canEnable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSData *provisioningPostData;
@property (nonatomic) int provisioningStatus;
@property (nonatomic, retain) NSURL *provisioningURL;
@property (getter=isProvisioningURLInvalid, nonatomic, readonly) BOOL provisioningURLInvalid;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)canEnable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidateProvisioningURL;
- (BOOL)isEnabled;
- (BOOL)isProvisioningURLInvalid;
- (id)provisioningPostData;
- (int)provisioningStatus;
- (id)provisioningURL;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCanEnable:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setProvisioningPostData:(id)arg1;
- (void)setProvisioningStatus:(int)arg1;
- (void)setProvisioningURL:(id)arg1;

@end
