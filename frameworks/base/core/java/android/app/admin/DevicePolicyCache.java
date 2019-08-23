/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package android.app.admin;

import android.annotation.UserIdInt;

import com.android.server.LocalServices;

/**
 * Stores a copy of the set of device policies maintained by {@link DevicePolicyManager} that
 * can be accessed from any place without risking dead locks.
 *
 * @hide
 */
public abstract class DevicePolicyCache {
    protected DevicePolicyCache() {
    }

    /**
     * @return the instance.
     */
    public static DevicePolicyCache getInstance() {
        final DevicePolicyManagerInternal dpmi =
                LocalServices.getService(DevicePolicyManagerInternal.class);
        return (dpmi != null) ? dpmi.getDevicePolicyCache() : EmptyDevicePolicyCache.INSTANCE;
    }

    /**
     * See {@link DevicePolicyManager#getScreenCaptureDisabled}
     */
    public abstract boolean getScreenCaptureDisabled(@UserIdInt int userHandle);

    /**
     * Empty implementation.
     */
    private static class EmptyDevicePolicyCache extends DevicePolicyCache {
        private static final EmptyDevicePolicyCache INSTANCE = new EmptyDevicePolicyCache();

        @Override
        public boolean getScreenCaptureDisabled(int userHandle) {
            return false;
        }
    }
}
