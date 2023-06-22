#ifndef s553r2_H
#define s553r2_H

#include "w2c2_base.h"

typedef struct s553r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s553r2Instance;

void f0(s553r2Instance*);

void f1(s553r2Instance*);

U32 f2(s553r2Instance*);

void f3(s553r2Instance*,U32);

U32 f4(s553r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s553r2Instance*,U32,U32,U32,U32,U32);

void f6(s553r2Instance*,U32);

void f7(s553r2Instance*,U32,U32,U32);

void f8(s553r2Instance*,U32,U32,U32);

void s553r2____wasm_call_ctors(s553r2Instance*i);

void s553r2____wasm_apply_data_relocs(s553r2Instance*i);

U32 s553r2_func_1(s553r2Instance*i);

void s553r2_call_cb(s553r2Instance*i,U32 l0);

void s553r2Instantiate(s553r2Instance* instance, void* resolve(const char* module, const char* name));

void s553r2FreeInstance(s553r2Instance* instance);

#endif /* s553r2_H */

