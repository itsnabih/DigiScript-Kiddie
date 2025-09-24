# DigiScript-Kiddie (Non-Destructive Document)

> **Important:** This repository contains a *historical/sanitized* demonstration and documentation only. It does **not** include or endorse code that causes harm, data loss, denial of service, or unauthorized access. This project is intended **only** for ethical, legal, and academic use in isolated, controlled environments under explicit permission.

## Summary

`Digibomb` is a research/teaching artifact intended to illustrate how human-interface devices and automated keyboard input can interact with an operating system. This README documents the *educational purpose*, safe testing practices, and ethical constraints. It does **not** provide operational instructions to deploy disruptive or malicious payloads.

## Purpose & Learning Objectives

This project is intended to help students and researchers learn about:

* The security implications of programmable USB Human Interface Devices (HID).
* Threat modelling for plug-and-play peripheral devices.
* How to design mitigations and detection controls against HID-based attacks.
* Responsible disclosure and safe experimentation practices.

## Strict Ethical & Legal Notice

* You **must not** use, modify, or distribute any code from this repository to cause disruption, damage, or loss to other people’s systems, networks, or data.
* Only test in environments you own or where you have **explicit written permission**.
* Abide by all applicable laws, institutional policies, and responsible disclosure procedures.
* Misuse may expose you to significant civil and criminal liability.

## Safe Testing Guidelines (REQUIRED)

Always follow these steps before performing any experiments:

1. **Isolate the test environment**

   * Use a dedicated physical machine or virtual machine (VM) that is fully isolated from production networks and personal accounts.
   * Prefer using an air-gapped machine or VM snapshot that can be restored quickly.

2. **Create snapshots / backups**

   * Take a full snapshot (or image backup) of the VM or the physical machine before testing.
   * Verify that the restore process works.

3. **Network isolation**

   * Disable networking or use a private network with no route to other devices.
   * Do not connect test systems to the internet, corporate networks, or home networks unless required and permitted.

4. **Use non-persistent environments**

   * Prefer ephemeral VMs (destroy after test) or disposable hardware.
   * Keep only minimal, necessary data on the test host.

5. **Approval & logging**

   * Obtain written approval from your supervisor, lab manager, or system owner.
   * Log all actions and results for accountability.

## What to Document Instead (Non-Actionable)

When writing reports or preparing an academic presentation, focus on non-actionable aspects such as:

* Threat model: attack surface, attacker capabilities, assumption model.
* High-level architecture: how USB HID devices fit into the stack (device → host OS → applications).
* Detection strategies: what telemetry to collect (USB device enumeration events, process creation logs, keyboard HID activity patterns).
* Mitigations and controls: policy, endpoint hardening, user education, device allowlists/deny-lists.
* Experiment results and metrics: observed behavior in a safe sandbox, false positives/negatives, detection latency.
* Ethical and legal considerations: consent, risk assessment, and remediation plans.

> **Do not** include low-level exploit steps, exact keystroke sequences that cause harm, or copy-pasteable commands that would enable replication outside an approved lab environment.

## Recovery & Remediation

If you run an experiment that modifies system state, recover using the following safe approaches:

* **Restore from snapshot** — revert the VM or system image to the pre-test snapshot.
* **Factory reset** — for physical devices where snapshotting is not possible.
* **Document indicators** — collect and preserve logs, screenshots, and artifacts for analysis before reformatting.
* **Do not attempt** to remediate by running untrusted scripts found online; prefer a full restore to ensure system integrity.

## Responsible Disclosure

If during testing you discover a vulnerability affecting other systems or vendors, follow a responsible disclosure process:

1. Collect reproducible, non-destructive test cases.
2. Notify the affected vendor or party privately with clear evidence and remediation suggestions.
3. Allow the vendor reasonable time to respond before public disclosure.
4. Coordinate with your institution or supervisor when necessary.

