#ifndef s717r2_H
#define s717r2_H

#include "w2c2_base.h"

typedef struct s717r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s717r2Instance;

void f0(s717r2Instance*);

void f1(s717r2Instance*);

U32 f2(s717r2Instance*);

void f3(s717r2Instance*,U32);

U32 f4(s717r2Instance*,U32,U32,U32,U32,U32);

void f5(s717r2Instance*,U32,U32,U32,U32,U32);

void f6(s717r2Instance*,U32);

void f7(s717r2Instance*,U32,U32,U32);

void f8(s717r2Instance*,U32,U32,U32);

void s717r2____wasm_call_ctors(s717r2Instance*i);

void s717r2____wasm_apply_data_relocs(s717r2Instance*i);

U32 s717r2_func_1(s717r2Instance*i);

void s717r2_call_cb(s717r2Instance*i,U32 l0);

void s717r2Instantiate(s717r2Instance* instance, void* resolve(const char* module, const char* name));

void s717r2FreeInstance(s717r2Instance* instance);

#endif /* s717r2_H */

