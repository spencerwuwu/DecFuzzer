#ifndef s368r2_H
#define s368r2_H

#include "w2c2_base.h"

typedef struct s368r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s368r2Instance;

void f0(s368r2Instance*);

void f1(s368r2Instance*);

U32 f2(s368r2Instance*);

void f3(s368r2Instance*,U32);

U32 f4(s368r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s368r2Instance*,U32,U32,U32,U32,U32);

void f6(s368r2Instance*,U32);

void f7(s368r2Instance*,U32,U32,U32);

void f8(s368r2Instance*,U32,U32,U32);

void s368r2____wasm_call_ctors(s368r2Instance*i);

void s368r2____wasm_apply_data_relocs(s368r2Instance*i);

U32 s368r2_func_1(s368r2Instance*i);

void s368r2_call_cb(s368r2Instance*i,U32 l0);

void s368r2Instantiate(s368r2Instance* instance, void* resolve(const char* module, const char* name));

void s368r2FreeInstance(s368r2Instance* instance);

#endif /* s368r2_H */

