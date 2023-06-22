#ifndef s113r2_H
#define s113r2_H

#include "w2c2_base.h"

typedef struct s113r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s113r2Instance;

void f0(s113r2Instance*);

void f1(s113r2Instance*);

U32 f2(s113r2Instance*);

void f3(s113r2Instance*,U32);

U32 f4(s113r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s113r2Instance*,U32,U32,U32,U32,U32);

void f6(s113r2Instance*,U32);

void f7(s113r2Instance*,U32,U32,U32);

void f8(s113r2Instance*,U32,U32,U32);

void s113r2____wasm_call_ctors(s113r2Instance*i);

void s113r2____wasm_apply_data_relocs(s113r2Instance*i);

U32 s113r2_func_1(s113r2Instance*i);

void s113r2_call_cb(s113r2Instance*i,U32 l0);

void s113r2Instantiate(s113r2Instance* instance, void* resolve(const char* module, const char* name));

void s113r2FreeInstance(s113r2Instance* instance);

#endif /* s113r2_H */

