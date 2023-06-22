#ifndef s460r2_H
#define s460r2_H

#include "w2c2_base.h"

typedef struct s460r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s460r2Instance;

void f0(s460r2Instance*);

void f1(s460r2Instance*);

U32 f2(s460r2Instance*);

void f3(s460r2Instance*,U32);

U32 f4(s460r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s460r2Instance*,U32,U32,U32,U32,U32);

void f6(s460r2Instance*,U32);

void f7(s460r2Instance*,U32,U32,U32);

void f8(s460r2Instance*,U32,U32,U32);

void s460r2____wasm_call_ctors(s460r2Instance*i);

void s460r2____wasm_apply_data_relocs(s460r2Instance*i);

U32 s460r2_func_1(s460r2Instance*i);

void s460r2_call_cb(s460r2Instance*i,U32 l0);

void s460r2Instantiate(s460r2Instance* instance, void* resolve(const char* module, const char* name));

void s460r2FreeInstance(s460r2Instance* instance);

#endif /* s460r2_H */

